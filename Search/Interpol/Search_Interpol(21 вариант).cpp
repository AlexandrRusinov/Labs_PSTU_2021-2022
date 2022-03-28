#include <iostream>                   /* 21 вариант. Добавить символ "ё" после искомого символа N. */
using namespace std;

void sortbubble(char arr[], int n)
{
    int tmp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int interpolsearch(char* arr, int n, int key)
{
    int left = 0;
    int right = n;
    int mid = 0;
    bool found = false;
    while ((left <= right && found != true))
    {
        mid = left + ((key - arr[left]) * (right - left)) / (arr[right] - arr[left]);
        if (arr[mid] < key)
        {
            right = mid + 1;
        }
        else if (arr[mid] > key)
        {
            right = mid + 1;
        }
        else { found = true; }
    }
    if (arr[left] == key) { return left; }
    else if (arr[right] == key) { return right; }
    else { return -1; }
}
int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    char key;
    cout << "Введите размер массива: ";
    cin >> n;
    char* arr = new char[n];
    cout << "Заполните массив." << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Введите символ: ";
        cin >> arr[i];
    }
    sortbubble(arr, n);
    cout << endl;
    cout << "После какого символа вставить новый символ? - ";
    cin >> key;
    int indexkey;
    int i = 0;
    indexkey = interpolsearch(arr, n, key);
    char* arr1 = new char[n + 1];
    bool flag = false;
    while (i != (n + 1) && flag == false)
    {
        if (i != indexkey)
        {
            arr1[i] = arr[i];
            i++;
        }
        else
        {
            arr1[i] = arr[i];
            arr1[i + 1] = 'ё';
            for (int j = i + 2; j < n + 1; j++) { arr1[j] = arr[j - 1]; } // докидываем остаток символом после нахождения N символа
            flag = true;
        }
    }
    delete[] arr;
    arr = arr1;
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}