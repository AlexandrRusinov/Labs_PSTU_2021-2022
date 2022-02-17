#include <iostream>
using namespace std;
void Print1(int*& arr, int size, int k)
{
	if (k >= 0)      // 2) По кольцу влево
	{
		if (k == 1)
		{
			for (int i = k - 1; i < k; i++)
			{
				cout << arr[i];
				for (int j = size - 1; j < size; j++)
				{
					cout << arr[j] << endl;
				}
			}
		}
		else
		{
			for (int i = k - 1; i < k; i++)
			{
				cout << arr[i];
				for (int j = i - 1; j < k - 1; j++)
				{
					cout << arr[j] << endl;
				}
			}
		}
	}
	else
	{
		for (int i = size - abs(k); i < size - abs(k) + 1; i++)
		{
			cout << arr[i];
			if (abs(k) != size)
			{
				for (int j = i - 1; j < i; j++)
				{
					cout << arr[j] << endl;
				}
			}
			else
			{
				for (int j = abs(k) - 1; j < abs(k); j++)
				{
					cout << arr[j] << endl;
				}
			}
		}
	}
}
void AddFront(int*& arr, int& size)
{
	int* arr1 = new int[size + 1];//динамический массив с количеством символов больше на 1
	arr1[0] = arr[0];//первому элементу нового массива присваиваем такое же значение 
	for (int i = 0; i < size + 1; i++)
	{
		arr1[i + 1] = arr[i];//переписываем массив со сдвигом вправо на 1, так как добавили элемент в начало
		cout << arr1[i];

	}
	delete[]arr;
	arr = arr1; //присваиваем тот же указатель обновленному массиву
	size++;
	cout << endl;
}
void AddBack(int*& arr, int& size)
{
	int* arr2 = new int[size + 3];//динамический массив с количеством символов больше на 3
	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
		cout << arr2[i];

	}
	for (int i = size; i < size+3; i++)
	{
		arr2[i] = arr[i-3];
		cout << arr2[i];

	}
	delete[]arr;
	arr = arr2; //присваиваем тот же указатель обновленному массиву
	size++;
	cout << endl;
}
void Print2(int*& arr, int size, int k)
{
	if (k >= 0)      // 4) По кольцу вправо
	{
		if (k == size)
		{
			for (int i = k - 1; i < k; i++)
			{
				cout << arr[i];
				for (int j = 0; j < 1; j++)
				{
					cout << arr[j] << endl;
				}
			}
		}
		else
		{
			for (int i = k - 1; i < k; i++)
			{
				cout << arr[i];
				for (int j = i + 1; j < k + 1; j++)
				{
					cout << arr[j] << endl;
				}
			}
		}
	}
	else
	{
		for (int i = size - abs(k); i < size - abs(k) + 1; i++)
		{
			cout << arr[i];
			if (k == -1)
			{
				for (int j = 0; j < 1; j++)
				{
					cout << arr[j] << endl;
				}
			}
			else
			{
				for (int j = i + 1; j <= i + 1; j++)
				{
					cout << arr[j] << endl;
				}
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Заполните массив из 5 целых чисел" << endl;
	int size = 5;
	int sizee = 9;
	int* arr = new int[size];
	int x, k;
	for (int i = 0; i < size; i++)
	{
		cin >> x;
		arr[i] = x;
	}
	cout << "Введите номер элемента, с которого начать вывод" << endl;
	cin >> k;
	Print1(arr, size, k);
	AddFront(arr, size);
	AddBack(arr, size);
	Print2(arr, sizee, k);
	return 0;
}
	
