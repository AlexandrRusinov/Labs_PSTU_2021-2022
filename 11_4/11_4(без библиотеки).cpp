/* 21 вариант. Тип информационного поля int. Удалить из очереди все элементы с четными информационными полями. */
#include <iostream>
using namespace std;
template <typename T> // шаблон
struct Node
{
	T data; // данные
	Node <T>* next; // указатель на следующий элемент
};

template <typename T>
struct Queue
{
	int size = 0; // размер
	Node<T>* head = nullptr; // указатель на голову - 1 элемент
	Node<T>* tail = nullptr; // указатель на хвост
};

template <typename T>
void push(Queue<T>& q, const T& value)
{
	if (q.head != nullptr) // если очередь не пуста
	{
		Node<T>* new_node = new Node<T>; //резервируем память под новый элемент
		q.size++; //увеличиваем размер очереди на 1
		new_node->data = value; //присваиваем значение элементу
		new_node->next = nullptr; //последнй элемент ни на что не указывает
		q.tail->next = new_node; //препоследний элемент указывает на последний
		q.tail = new_node; //указатель на последний элемент теперь указывает на новый
	}
	else
	{
		Node<T>* new_node = new Node<T>; //резервируем память под новый элемент
		new_node->data = value; //присваиваем значение элементу
		q.head = new_node; //первый элемент - единственный
		q.tail = new_node; //поэтому указатели указывают на него
		q.size = 1; //всего один элемент
	}
}
template <typename T>
void new_queue(Queue<T>& q, const int& n)
{
	T a; // под шаблон 
	for (int i = 0; i < n; i++)
	{
		cout << "Введите элемент: ";
		cin >> a;
		push(q, a); // вводим элемент и вставляем его в конец очереди
	}
}
template <typename T>
void print_queue(Queue<T> q)
{
	Node<T>* tmp = q.head; // указатель на первый элемент
	cout << " начало -> ";
	while (tmp != nullptr) // до последнего элемента
	{
		cout << tmp->data << " -> "; // обращаемся к полю элемента и выводим значение
		tmp = tmp->next; // переход к следующему элементу
	}
	cout << "конец" << endl;
}
template <typename T>
void pop(Queue<T>& q)
{
	Node<T>* tmp = q.head; // указатель на первый элемент
	q.head = q.head->next; // голова теперь следующий элемент
	q.size--; // кол-во стало меньше на 1 (для печати)
	delete tmp; // очищаем память
}
template <typename T>
void delete_key(Queue<T>& q)
{
	int i = 0;
	while (i<q.size)
	{
		if (q.head->data % 2 == 0)
		{
			pop(q); // удаляем четный элемент
			// размер не уменьшаем, потому что это уже предусмотрено в нашей функции "pop"
		}
		else
		{
			push(q, q.head->data); // переставляем элемент в конец очереди с его датой
			pop(q); // удаляем первый элемент по закону очереди
			i++;
		}
	}

}
int main()
{
	setlocale(LC_ALL, "ru");
	Queue<int> q; 
	int n;
	do
	{
		cout << "Введите кол-во элементов в очереди: ";
		cin >> n;
	} while (n <= 0);
	
	new_queue(q, n); // создаем очередь
	cout << endl;
	print_queue(q); // выводим на экран
	cout << endl;
	delete_key(q); // корректируем-удаляем элементы
	print_queue(q); // выводим скорректированную очередь 	
	return 0;
}
