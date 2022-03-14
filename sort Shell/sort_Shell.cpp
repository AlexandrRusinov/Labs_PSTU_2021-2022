#include<iostream> 
#include<cmath>
using namespace std;
void Shell1(int arr[], int n)
{
    int d = n / 2;

    while (d > 0)
    {
        for (int i = 0; i < n - d; i++)
        {
            int j = i;
            while (j >= 0 && arr[j] > arr[j + d])
            {
                int temp = arr[j];
                arr[j] = arr[j + d];
                arr[j + d] = temp;

                j--;

            }
        }
        d = d / 2;

    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    int n = 5;
    int* arr = new int[n];
    cout << "Введите элементы" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Shell1(arr, n);
    delete[] arr;
}