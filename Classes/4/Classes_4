#include <iostream> // 12 вариант.
#include <string>
using namespace std;

class Person
{
protected: // в наследство
    string name;
    int age;
public:
    Person(void)
    {
        name = "";
        age = 0;
    }

    Person(string pName, int pAge)
    {
        name = pName;
        age = pAge;
    }

    Person(const Person& p)
    {
        name = p.name;
        age = p.age;
    }

    ~Person(void) { }
public:
    // Геттеры (возвращают значение полей класса)
    string getNme() { return name; }
    int getAge() { return age; }

    // Сеттеры (устанавливают зачения полей класса)
    void setName(string newName) { name = newName; }
    void setAge(int newAge) { age = newAge; }

    // Перегрузка оператора присваивания
    Person& operator=(const Person&);
    // Перегрузка операторов ввода и вывода

    friend istream& operator>>(istream& in, Person& p);
    friend ostream& operator<<(ostream& out, const Person& p);

    Person& operator+(const Person& b);
};


Person& Person::operator=(const Person& p)
{
    if (&p == this) return *this;
    name = p.name;
    age = p.age;
    return *this;
}

Person& Person::operator+(const Person& b)
{
    age += b.age;
    return *this;
}

istream& operator>>(istream& in, Person& p)
{
    cout << "New Name: "; in >> p.name;
    cout << "New Age: "; in >> p.age;
    return in;
}

ostream& operator<<(ostream& out, const Person& p)
{
    out << "Name: " << p.name << endl;
    out << "Age: " << p.age << endl;
    return out;
}

class Student : public Person // производный класс
{
protected:
    int year;
public:
    Student(void) : Person() { year = 0; } // конструктор без параметром

    Student(string pName, int pAge, int sYear) : Person(pName, pAge)
    {
        year = sYear;
    }

    Student(const Student& s)
    {
        name = s.name;
        age = s.age;
        year = s.year;
    }

    ~Student(void) {}
public:
    int getYear() { return year; }
    void setYear(int newYear) { year = newYear; }
    Student& operator=(const Student&);
    friend istream& operator>>(istream& in, Student& s);
    friend ostream& operator<<(ostream& out, const Student& s);

    void increaseYear(int yearCount) { year += yearCount; }
};


Student& Student::operator=(const Student& s)
{
    if (&s == this) return *this;
    name = s.name;
    age = s.age;
    year = s.year;
    return *this;
}

istream& operator>>(istream& in, Student& p)
{
    cout << "New Name: "; in >> p.name;
    cout << "New Age: "; in >> p.age;
    cout << "New Year: "; in >> p.year;
    return in;
}

ostream& operator<<(ostream& out, const Student& p)
{
    out << "Name: " << p.name << endl;
    out << "Age: " << p.age << endl;
    out << "Year: " << p.year << endl;
    return out;
}

void f1(Person& p)
{
    p.setName("Egor");
    cout << p;
}

Person f2()
{
    Student s("Borya", 22, 6);
    return s;
}

int main()
{
    Person a;
    cin >> a;
    cout << a << endl;
    Person b("Slava", 76);
    cout << b << endl;
    a = b;
    cout << a;
    // cout << a + b;
    // cout << b + a;

    Student c;
    cin >> c;
    c.increaseYear(5);
    cout << c;

    f1(c);
    a = f2();
    cout << a;

}
