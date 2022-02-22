
#include <iostream>
using namespace std;
int Hanoy(int n, int start, int temp, int point)
{
    if (n > 0)
    {
        // start - стержень, с которого нужно переместить
        // temp - стержень, на который нужно переместить
        // point - вспомогательный стержень
        Hanoy(n - 1, start, point, temp);
        cout << start << " => " << temp << endl;
        Hanoy(n - 1, point, temp, start);
    }
    return 0;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество стержней: ";
    cin >> n;
    Hanoy(n, 1, 3, 2);
    return 0;
}

