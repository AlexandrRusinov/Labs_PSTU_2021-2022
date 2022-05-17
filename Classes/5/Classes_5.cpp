#include<iostream>
#include<string>
using namespace std;
class Human // абстракт, главный предок
{
public:
	virtual void show() = 0;
};

class Person : public Human
{
protected:
	string name;
	int age;
public:

	Person()
	{
		name = ' ';
		age = 0;
	}
	Person(string nname, int aage)
	{
		name = nname;
		age = aage;
	}
	Person(const Person& other)
	{
		this->name = other.name;
		this->age = other.age;
	}

	void setname(string nname)
	{
		name = nname;
	}
	string getname()
	{
		return name;
	}

	void setage(int aage)
	{
		age = aage;
	}
	int getage()
	{
		return age;
	}


	friend istream& operator>>(istream& in, Person& tmp);
	friend ostream& operator<<(ostream& out, const Person& tmp);

	void show() override
	{
		cout << " Человек: " << name << ", " << age << endl;
	}

	virtual ~Person()
	{
		cout << "Вызван деструктор для обьекта " << this << endl;
	}
};

istream& operator>>(istream& in, Person& tmp) // френд
{
	cout << "Введите имя: "; in >> tmp.name;
	cout << "Введите возраст: "; in >> tmp.age;
	return in;
}

ostream& operator<<(ostream& out, const Person& tmp) // френд
{
	return (out << "Человек: " << tmp.name << ", " << tmp.age << endl);
}

class Student : public Person
{
public:

	Student()
	{
		int age = 0;
	}
	Student(int yyear)
	{
		int age = yyear;
	}
	Student(const  Student& other)
	{
		int age = other.age;
	}

	void show() override
	{
		cout << " Student year: " << age << endl;
	}
	
	
	Student& operator++()
	{
		this->age += 1;
		return *this; // возвращает указатель, смотри на сигнатуру
	}
	Student& operator++(int)
	{
		this->age += 1;
		return *this;
	}
	friend istream& operator>>(istream& in, Student& tmp);
	friend ostream& operator<<(ostream& out, const Student& tmp);
	~Student()
	{
		cout << "Удалили Student..." << endl << endl;
	}

};

istream& operator>>(istream& in, Student& tmp)
{
	cout << "Введите год: "; in >> tmp.age;
	return in;
}

ostream& operator<<(ostream& out, const Student& tmp) // в параметре константная ссылка на объект, с которым будем работать. Tmp (temp) - временная переменная
{
	return (out << "Год: " << tmp.age  << endl);
}

class Vector // как массив, только прокаченный. Без некоторых недостатков, как у обычного массива. Через stl ячейки памяти формируются еще с запасом (пустые ячейки - capacity), зависит от начального количества элементов.
{            // это плюс к его производительности, не нужно переопределять массив (создавать новый массив и присваивать адрес старого новому)
private:
	Human** beg; // указатель на первый элемент вектора
	int size;
	int cur;
public:
	Vector()
	{
		beg = 0;
		size = 0;
		cur = 0; // текущая позиция
	}
	Vector(int n)
	{
		beg = new Human * [n];
		cur = 0;
		size = n;
	}
	void add(Human* tmp) // добавление элемента в вектор
	{
		if (cur < size)
		{
			beg[cur] = tmp;
			cur++;
		}
	}
	~Vector()
	{
		if (beg != 0)
		{
			delete[] beg;
		}
		beg = 0;
	}
	friend ostream& operator<<(ostream& out, const Vector& v);
};

ostream& operator<<(ostream& out, const Vector& v)
{
	cout << "Вектор:" << endl;
	if (v.size == 0)
	{
		out << "Empty" << endl;
	}
	Human** tmp = v.beg;
	for (int i = 0; i < v.cur; i++)
	{
		(*tmp)->show();
		tmp++;
	}
	return out;
}


int main()
{
	setlocale(LC_ALL, "Rus");
	Vector v(2); // вектор из 2 элементов
	Person a; // объект класса
	cin >> a;
	cout << a;
	Student b;
	cin >> b;
	b++;
	cout << b;
	Human* tmp = &a; // ставим указатель на объект класса Person
	v.add(tmp); // добавляем объект в вектор
	tmp = &b;
	tmp->show();
	v.add(tmp);
	cout << v;
	return 0;
}