				   /* 12 вариант. Поле first – целое положительное число, продолжительность телефонного разговора в
								  минутах, поле second – дробное положительное число, стоимость одной минуты
								  разговора в рублях. Реализовать метод cost() –вычисление общей стоимости разговора */
#include<iostream>
#include<cmath>
using namespace std;
class Tell  // класс - пользовательский тип данных
{
public:  // создаем поля
	int first;
	double second;
	int minutecost;
	double tellcost;
	void read()
	{
		cout << "Введите минуты: ";
		cin >> first;
		cout << endl << "Введите секунды(дробное положительное число): ";
		cin >> second;
		cout << endl << "Введите стоимость одной минуты(целое число): ";
		cin >> minutecost;
		//Init();
	}
	void cost()
	{
		tellcost = ((first * 60 + second) / 60) * minutecost;
	}
	void show()
	{
		cout << endl << "Стоимость разговора равна: " << tellcost << endl;
	}

};

int main()
{
	setlocale(LC_ALL, "Rus");
	Tell My; // экземпляр
	My.read();
	My.cost();
	My.show();
	return 0;
}