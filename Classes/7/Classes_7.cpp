#include <iostream> // 12 вариант
using namespace std;

template <class T> // class - тип данных и T - параметр шаблона (название?)
class List
{
protected:
	int size;
	T* data; // переменная data типа данных T(class), в нашем случае указатель на класс - первый элемент списка
public:
	List(int s, T k);  // выделяет память под s элементов и заполняет их значением k
	List(const List<T>& p);
	~List();
	T& operator[](int index);
	List operator+(const T k);
	List& operator=(const List<T>& p);
	int& operator()();
	friend ostream& operator<< <>(ostream& out, const List<T>& p);
	friend istream& operator>> <>(istream& in, List<T>& p);
};

template <class T>
List<T>::List(int s, T k)
{
	size = s;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = k;
}

template <class T>
List<T>::List(const List<T>& p)
{
	size = p.size;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = p.data[i];
}

template <class T>
List<T>::~List()
{
	delete[]data;
	data = 0;
}

template <class T>
List<T>& List<T>::operator=(const List<T>& p)
{
	if (this == &p) return *this;
	size = p.size;
	if (data != 0) delete[]data;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = p.data[i];
	return *this;
}

template <class T>
T& List<T>::operator[](int index)
{
	if (index < size) return data[index];
	else cout << "ОШИБКА ДОСТУПА! (index>size)";
}

template <class T>
List<T> List<T>::operator+(const T k)
{
	List<T> temp(size, k);
	for (int i = 0; i < size; ++i)
		temp.data[i] = data[i] + k;
	return temp;
}

template <class T>
int& List<T>::operator()()
{
	return size;
}

template <class T>
ostream& operator<<(ostream& out, const List<T>& p)
{
	for (int i = 0; i < p.size; i++)
		out << p.data[i] << " ";
	return out;
}

template <class T>
istream& operator>>(istream& in, List<T>& p)
{
	for (int i = 0; i < p.size; i++)
		in >> p.data[i];
	return in;
}

class Time
{
public:
	int min, sec;
public:
	Time(void);
	Time(int, int);
	Time(const Time&);
	~Time() {};
	Time operator+(Time k);
	friend ostream& operator<< (ostream& out, const Time&);
	friend istream& operator>> (istream& in, Time&);
};

Time::Time(void)
{
	min = sec = 0;
}

Time::Time(int min, int sec)
{
	this->min = min;
	this->sec = sec;

}

Time::Time(const Time& p)
{
	this->min = p.min;
	this->sec = p.sec;
}


Time Time::operator+(Time k)
{
	int t = min * 60 + sec;
	int kt = k.min * 60 + k.sec;
	t += kt;
	Time temp(t / 60, t % 60);
	return temp;
}


ostream& operator<< (ostream& out, const Time& p)
{
	out << p.min << ":" << p.sec;
	return out;
}

istream& operator>> (istream& in, Time& p)
{
	cout << "\nMin: "; in >> p.min;
	cout << "\nSec: "; in >> p.sec;
	if (p.sec > 60)
	{
		p.min += p.sec / 60;
		p.sec = p.sec % 60;
	}
	return in;
}


int main()
{
	setlocale(LC_ALL, "rus");
	//int k;
	//cin >> k;

	Time t;
	cin >> t;
	cout << t << '\n';
	List<Time> a(5, t); // <указываем с каким типом данным будет работать класс (с типом данным - класс)> (выделяет память под s элементов, и заполняет их значением k)
	cout << a << '\n';
	cin >> a;
	cout << a;
	cout << '\n';
	cout << a[2] << '\n';
	cout << "Size of list a: " << a() << '\n';
	return 0;
}
