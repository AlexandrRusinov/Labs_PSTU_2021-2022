#include<iostream>
#pragma warning(disable : 4996)
#include <stdio.h>
using namespace std;

struct car
{
	char brand[60];
	char vincode[60];
	char regnum[60];
	int year;

};

int main()
{
	setlocale(LC_ALL, "Russian");
	FILE* fp;
	fp = fopen("car.txt", "w");
	if (fp == NULL) { cout << "Err" << endl; exit(1); }
	car exmp[4];
	exmp[0] = { "Ваз 2114", " XF2949Z ", "В999ОА59 ", 2012 };
	exmp[1] = { "Skoda Octavia", " XR2949Z ", "В900КА72 ", 2005 };
	exmp[2] = { "Honda Civic", " XD2922A ", "Х521АС74 ", 2007 };
	exmp[3] = { "Mercedes w220", " BG2093D ", "А777АА22 ", 2004 };

	cout << endl;
	car* line = new car[4];
	line[0] = exmp[0];
	line[1] = exmp[1];
	line[2] = exmp[2];
	line[3] = exmp[3];
	for (int i = 0; i < 4; i++)
	{
		cout << exmp[i].brand << exmp[i].vincode << exmp[i].regnum << exmp[i].year << endl;
	}
	cout << endl;
	car* nline = new car[1];
	nline[0] = line[3];
	for (int i = 0; i < 1; i++)
	{
		cout << nline[i].brand << nline[i].vincode << nline[i].regnum << nline[i].year << endl;
	}
	cout << endl;
	car* nnline = new car[2];
	nnline[0] = nline[0];
	nnline[1] = { "Hyundai i30", " FF2119R ", "А722АН31 ", 2011 };
	for (int i = 0; i < 2; i++)
	{
		cout << nnline[i].brand << nnline[i].vincode << nnline[i].regnum << nnline[i].year << endl;
	}
	exmp[0] = nnline[0];
	exmp[1] = nnline[1];
	cout << endl;
	delete[] line;
	delete[] nline;
	delete[] nnline;
	fclose(fp);
	return 0;
}