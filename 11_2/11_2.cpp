/*
			21 вариант.
			Тип информационного поля int.
			Удалить из списка все элементы с четными информационными полями.			      списки - просто куски память, которые ссылаются на другие куски памяти   данные + указатель на след. кусок (пример: плитки)
																							  в двунаправленном просто 2 указателя - на след. и пред в одном куске
*/
#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* ptr_next = nullptr; // pointer to next node(узел)
	Node* ptr_prev = nullptr;
};

struct List
{
	Node* headnode = nullptr;
	Node* tailnode = nullptr;
};

void pushBack(List& list, const int& data) // функция добавления элемента в конец массива
{
	Node* newnode = new Node; // создаем-выделяем память под первый узел
	newnode->data = data; // присваиваем значение узлу
	if (list.headnode == nullptr) //если список пуст (адрес сразу nullptr)
	{
		list.headnode = newnode; // новый узел становится главным узлом
		list.tailnode = newnode;
	}
	else
	{
		list.tailnode->ptr_next = newnode;
		list.tailnode = newnode;
	}
}

void change(List& list)
{
	
	Node* currentnode = list.headnode;
	Node* tailnode = list.tailnode;
	while (currentnode != nullptr)
	{
		
		if (currentnode->data % 2 == 0)
		{
			Node* remove = currentnode;
			delete remove;
			if (remove = tailnode)
			{
				tailnode = nullptr;
			}
		}
		currentnode = currentnod->ptr_next;
	}	
}
int main()
{
	setlocale(LC_ALL, "ru");
	List list; // инициализируем список
	const int n = 5;
	int dd;
	cout << "Заполните список целыми числами" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> dd;
		pushBack(list, dd);
	}
	change(list);
	Node* first = list.headnode;
	while (first != nullptr)
	{
		cout<< first->data << ' '; // выводим данные текущего узла
		first = first->ptr_next; // переходим к следующему узлу
	}
	return 0;
}
