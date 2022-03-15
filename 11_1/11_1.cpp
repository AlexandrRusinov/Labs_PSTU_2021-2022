/*
			21 вариант.
			Тип информационного поля *char.
			Добавить в список элемент после элемента с заданным информационным полем.
*/
#include <iostream>
using namespace std;

struct Node  
{
	char data;
	Node* ptr = nullptr;  // pointer to next node(узел)
};

Node* list(int n)    // инициализируем список(лист) - экземляр типа данных
{
	Node* first = new Node;     // выделяем память под первый узел
	Node* p, * r;				// указатели под текущий и следующий узел
	cout << "\n>>";
	cin >> first->data;         // вводим первый char в data в СТРУКТУРУ первого узла (struct Node)	, присвоит указателю first адрес введенного chara							 			         | -> оператор доступа к членам через указатель, указывает на структуру |
	first->ptr = 0;			    // присваиваем полю узла ptr данные (0 - nullptr) след.указателю (по сути мы еще на этом же первом узле) // !!узел содержит указатель на следующий элемент!!
	p = first;					// указатель на первый узел 
	for (int i = 0; i < n - 1; i++)
	{
		r = new Node; // создаем следующий узел
		cout << "\n>>";
		cin >> r->data;
		r->ptr = 0;
		p->ptr = r;
		p = r;

	}
	return first;
}

void print_list(Node* first)
{
	Node* p = first;
	while (p != nullptr)
	{
		cout << p->data << "\t";   // \t - tab-уляция 4 пробела
		p = p->ptr;
	}
}

Node* add_element(Node* first, int n, char b)
{
	Node* p = first;
	Node* New = new Node;
	cout << "Введите новый элемент: ";
	cin >> New->data;
	for (int i = 0; i < n && p != 0; i++)
	{
		if (p != nullptr && p->data == b)
		{
			New->ptr = p->ptr;
			p->ptr = New;
		}
		p = p->ptr;
	}
	return first;
}

int main()
{
	setlocale(LC_ALL, "ru");
	char b;
	cout << "Введите символ, после которого будет добавлен новый элемент: ";
	cin >> b;
	int n = 5;
	Node* first = list(n);
	add_element(first, n, b);
	print_list(first);
	return 0;
}