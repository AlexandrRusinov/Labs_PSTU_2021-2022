#include<iostream>
#include<string>
using namespace std;
class receipt
{
public:
	int id;
	string date;
	double sum;
	receipt()
	{
		id = 2356;
		date = "12.04.2022";
		sum = 5000.0;
		cout << "Конструктор без параметров для обьекта ->" << this << endl;

	}
	receipt(int VolId, string VolDate, double VolSum)
	{
		id = VolId;
		date = VolDate;
		sum = VolSum;
		cout << "Конструктор с параметрами для обьекта ->" << this << endl;

	}
	receipt(const receipt& third)
	{
		id = third.id;
		date = third.date;
		sum = third.sum;
		cout << "Вызван конструктор копирования ->" << this << endl;

	}
	~receipt()
	{
		cout << "Вызван деструктор для ->" << this << endl;
	}
	int GetId()
	{
		cout << "ФИО ученика: " << id << endl;
		return id;
	}
	void SetId(int ValueId)
	{
		id = ValueId;
	}
	string GetDate()
	{
		cout << "Его дата: " << date << endl;
		return date;
	}
	void SetDate(string ValueDate)
	{
		date = ValueDate;
	}
	double GetSum()
	{
		cout << "Его сумма: " << sum << endl;
		return sum;
	}
	void SetSum(double ValueSum)
	{
		sum = ValueSum;
	}
	void show()
	{
		cout << "Номер квитанции: " << id << endl << "Дата операции: " << date << endl << "Сумма: " << sum << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "Rus");
	receipt first;
	first.show();
	receipt second(2957, "26.03.2022", 3430.80);
	second.show();
	receipt third(*&first);
	third.show();
	receipt dop;
	dop.SetId(5948);
	dop.GetId();
	dop.SetDate("10.03.2022");
	dop.GetDate();
	dop.SetSum(2036.50);
	dop.GetSum();
	return 0;
}
