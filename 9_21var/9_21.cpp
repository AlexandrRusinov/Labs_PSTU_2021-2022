		              /* 1) Скопировать из файла F1 в файл F2 все строки, в которых
				     есть слова, совпадающие с первым словом.
				 2) Определить количество согласных букв в последней строке
				     файла F2.      */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	ifstream fin; // исходный файл
	ofstream fout; // принимающий файл
	fin.open("F1.txt"); 
	fout.open("F2.txt"); 
	if (!fout.is_open()) { cout << "Ошибка открытия файла 2" << endl; }
	else { cout << "Файл 2 открыт!" << endl; }
	if (!fin.is_open()) { cout << "Ошибка открытия файла 1" << endl; } // возвращает булеву переменную 
	else
	{
		cout << "Файл 1 открыт!" << endl;
		string FirstWord, SelLine, ss;
		string consonants = "bcdfghjklmnpqrstvwxz"; // ряд согласных
		int ConsK = 0; // счетчик согласных
		fin >> FirstWord; // извлекаем первое слово
		while (getline(fin, SelLine)) // работаем, пока строки извлекаются
		{
			SelLine = SelLine + ' '; // для облегчения, чтобы обнаружить все слова
			ss = ""; // вспомогательное временное слово, с которым будем сравнивать первое. Получаться оно будет посимвольным приписыванием (через иттерации)
			for (int i = 0; i < SelLine.size(); i++)
			{
				if (SelLine[i] != ' ') {
					ss = ss + SelLine[i];
				}
				else {
					if (ss == FirstWord) {
						fout << SelLine << endl; // копируем удовлетворяющую текущую строку в файл F2
						cout << SelLine << endl; // выводим ее в консоль
						ss = "";
					}
					else { ss = ""; }
				}
			}
		}
		for (int j = 0; j < SelLine.size() - 1; j++) // шагаем по каждому символу строки
		{
			for (int k = 0; k < consonants.size(); k++) // шагаем по ряду согласных
			{
				if (SelLine[j] == consonants[k]) { ConsK++; } // проверяем, входит ли символ в ряд согласных
			}
		}
		cout << "Количество согласных в последней строке: " << ConsK << endl;
	}
	fin.close();
	fout.close();
	return 0;
}
