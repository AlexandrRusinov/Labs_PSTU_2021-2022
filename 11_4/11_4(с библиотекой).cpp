#include <iostream>
#include <queue>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    queue <int> q1;
    int n, enter;
    cout << "Задайте размер очереди: ";
    cin >> n;
    cout << "Введите значения: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> enter;
        q1.push(enter);
    }
    while (n>0)
    {
        if (q1.front() % 2 == 0)    
        {
            q1.pop();
        }
        else
        {
            q1.push(q1.front());
            q1.pop();
        }
        n--;
    }
    while (!q1.empty())
    {
        cout << q1.front();
        q1.pop();
    }
    return 0;
}
