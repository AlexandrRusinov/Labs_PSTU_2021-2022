﻿#include <iostream>
using namespace std;
//счетчик ключей = разница, которую будем вычитать из размера оригинального массива 
void LineSearch(char arr[], int size, int key)
{
    int k = 0; // счетчик ключей - ненужных символов
    int i = 0;
    int detectit = 0;     /* вспомогательная переменная-счетчик, нужна для того, чтобы согласовать индексы элементов 2-ух динамических
                             массивов и добавить именно нужные элементы во вспомогательный массив */
    for (int i = 0; i < size; i++) // скан на количество ненужных символов
    {
        if (arr[i] == key)
        {
            k += 1;
        }
    }

    char* arr1 = new char[size - k];
    
    while(i!=size)
    {
        if (arr[i]==key)
        {
            detectit++;  // увеличиваем значение вспомогательной переменной и "пропускаем" добавление ненужного элемента в массив через i++;
            i++;
        }
        else
        {
            if (detectit > 0) 
            {
                arr1[i - detectit] = arr[i]; 
            }
            else
            {
                arr1[i] = arr[i];
            }
            i++;
        }
    }
    delete[]arr; // очищаем оригинальный массив
    arr = arr1; // присваиваем оригинальному массиву указатель вспомогательного массива
    for (int i = 0; i < size - k; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    setlocale(LC_ALL, "ru");
    int size = 10;
    char key = ']';
    char* arr = new char[size];
    cout << "Заполните массив 10 символами" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Введите символ: ";
        cin >> arr[i];
    }
    LineSearch(arr, size, key);
    return 0;
}

