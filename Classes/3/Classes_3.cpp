#include <iostream> // 12 вариант.

using namespace std;

class Pair
{
private:
	int first;
	double second;
public:
	Pair() // конструктор для объекта без параметров
	{
		first = 33;
		second = 11.2557;
	}
	Pair(int f, double s) // конструктор с параметрами, позволяет инициализировать поля объекта заданными данными
	{
		first = f;
		second = s;
	}
	Pair(const Pair& t) // конструктор копирования - нужен нам для того, чтобы создавать «реальные» копии объектов класса, а не побитовую копию объекта.
	{
		first = t.first;
		second = t.second;
	}
	int getFirst()
	{
		return first;
	}
	int getSecond()
	{
		return second;
	}
	void setFirst(int f)
	{
		first = f;
	}
	void setSecond(int s)
	{
		second = s;
	}

	bool operator>(const Pair& t)
	{
		return (this->first > t.first && this->second > t.second); // сравниваем поля объекта, получая их через указатель this
	}

	bool operator<(const Pair& t)
	{
		return !(this->first > t.first && this->second > t.second);
	}

	Pair& operator++() // префиксная операция
	{
		this->first++;
		return *this; // разыменовываем и получаем ссылку
	}
	Pair& operator++(int) // постфиксная операция - обязательно int, они так различаются
	{
		this->second++;
		return *this;
	}

	friend ostream& operator<<(ostream& out, const Pair& tmp); // предоставляем доступ оператору, friend - ключевое слово

	~Pair() // деструктор, деинициализируем объект
	{
		cout << "Сработал деструктор" << endl;
	}
};

// для префиксного все намного проще и делается без параметра (так они различаются)
// чтоб реализовать постфиксный инкремент/декремент - нужно передавать данные через параметр, для префиксного - без
/* нужно запоминать текущее состояние объекта(временный объект a, над которым производим операции)
   для постфиксного инкремента/декремента и его же обновленный вернуть в b */
// сначала b должно присвоиться значение a, потом увеличиться а и обновить значение b

ostream& operator<<(ostream& out, const Pair& tmp) // перегрузка оператора вывода, всегда реализуются как внешние дружественные функции
{
	return (out << tmp.first << " : " << tmp.second);
}


int main()
{
	setlocale(LC_ALL, "Russian");
	Pair a;
	Pair b(2, 3.2557);
	cout << "Пара чисел a " << a << endl;
	Pair c = ++a; // для операций нужен новый объект
	cout << "Пара чисел a (после префиксной инкрементации) -> " << c << endl;
	Pair d = a++;
	cout << "Пара чисел a (после постфиксной инкрементации) -> " << d << endl;
	cout << "Пара чисел для сравнения -> " << b << endl;
	bool result = d > b;
	cout << "Числа в первой паре больше? " << result << endl;
	bool result_2 = d < b;
	cout << "Числа в первой паре меньше? " << result_2 << endl;
	return 0;
}
