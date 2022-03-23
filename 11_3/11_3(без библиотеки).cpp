/*
	Тип информационного поля *char
	Добавить в стек элемент после элемента с заданными информационным полем
*/
#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Node
{
	T data;
	Node<T>* next;
};

template <typename T>
struct Stack
{
	Node<T>* head = nullptr;
	int size = 0;
};

template <typename T>
void push(Stack<T>& tmp, const T& data)
{
	Node<T>* newnode = new Node<T>;
	newnode->next = tmp.head;
	newnode->data = data;
	tmp.head = newnode;
	tmp.size++;
}

template <typename T>
void pop(Stack<T>& tmp)
{
	if (tmp.head != nullptr)
	{
		Node<T>* deleted = tmp.head;
		tmp.head = tmp.head->next;
		delete deleted;
		tmp.size--;
	}
}

template <typename T>
void printStack(Stack<T>& tmp)
{
	Node<T>* currentnode = tmp.head;
	while (currentnode != nullptr)
	{
		cout << currentnode->data << " ";
		currentnode = currentnode->next;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	int count = 1;
	cout << "Введите размер стэка: ";
	cin >> n;
	string k, curr, enter;
	Stack <string> st;
	Stack <string> st2;
	cout << "Заполните стек символами/строками! " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Введите элемент: ";
		cin >> k;
		push(st, k);
	}
	cout << endl;
	cout << endl;
	cout << "После какого элемента добавить новый элемент?";
	cin >> curr;
	cout << "Введите новый элемент: ";
	cin >> enter;
	for (int i = 0; i < n; i++)
	{
		if (st.head->data == curr)  // как встретит выбранный элемент - добавляет его и выходит из цикла
		{
			push(st, enter);
			break; // выходит из цикла for с куском данных
		}
		else
		{
			push(st2, st.head->data); // подгружает во вспомогательный стек элемента оригинального стека
			pop(st); // удаляет головной элемент
		}
	} 
	while (st.head!=nullptr)  // докидываем оставшийся кусок данных во вспомогательный стек s2
	{
		push(st2, st.head->data);
		pop(st);
	}
	printStack(st2);
	return 0;
}