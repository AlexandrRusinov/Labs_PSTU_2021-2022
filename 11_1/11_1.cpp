/*
			21 вариант.
			Тип информационного поля *char.
			Добавить в список элемент после элемента с заданным информационным полем.         списки - просто куски память, которые ссылаются на другие куски памяти   данные + указатель на след. кусок (пример: плитки)
																							  в двунаправленном просто 2 указателя - на след. и пред в одном куске
*/
#include <iostream>
using namespace std;

struct Node
{
	char data;
	Node* ptr_next = nullptr;  // pointer to next node(узел)
};

struct List
{
	Node* headnode = nullptr;
	Node* curnode = nullptr;
};

void pushBack(List& list, const int& data) // функция добавления элемента в конец массива
{
	Node* newnode = new Node;  // создаем-выделяем память под первый узел
	newnode->data = data;	   // присваиваем значение узлу
	if (list.headnode == nullptr)  //если список пуст (адрес сразу nullptr)
	{
		list.headnode = newnode;  // новый узел становится главным узлом
	}
	else
	{
		Node* curnode = list.headnode;  // берем в качестве текущего узла начальный
		while (curnode->ptr_next != nullptr) // пока не найдем последний узел в списке
		{
			curnode = curnode->ptr_next; // переходим к следующему узлу // вытягиваем каждый раз адрес из следующего элемента оператором -> (получаем доступ к элементу через указатель)
		}
		curnode->ptr_next = newnode; // ссылаем последний узел списка на новый
	}
}

Node* add_element(Node* curnode, int n, char b)
{
	Node* p = curnode;
	Node* New = new Node;
	cout << "Введите новый элемент: ";
	cin >> New->data;  // присвоили данные новому элементу и получили доступ по указателю
	for (int i = 0; i < n && p != 0; i++)
	{
		if (p != 0 && p->data == b)
		{
			New->ptr_next = p->ptr_next;
			p->ptr_next = New;
		}
		p = p->ptr_next;
	}
	return curnode;
} 

int main()
{
	setlocale(LC_ALL, "ru");
	List list; // инициализируем список
	const int n = 5;
	char dd, b;
	cout << "Заполните список символами" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> dd;
		pushBack(list, dd);
	}
	cout << "Введите символ, после которого нужно вставить новый: ";
	cin >> b;
	Node* curnode = list.headnode; // указатель на текущий узел
	add_element(curnode, n, b);
	while (curnode != nullptr)
	{
		cout << curnode->data << ' '; // выводим данные текущего узла
		curnode = curnode->ptr_next; // переходим к следующему узлу
	}
	return 0;
}