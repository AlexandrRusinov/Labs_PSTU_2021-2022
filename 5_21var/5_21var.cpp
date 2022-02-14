#include <iostream>
using namespace std;
int main()
{
    const int n = 2;
    const int m = 3;
    int a[n][m] = { {1, 7, 1}, {7, 2, 2} }, b[n * m / 2], k = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (find(b, b + k, a[i][j]) == b + k)
            {
                bool f = true;
                for (int ii = i; ii < n && f; ii++)
                {
                    for (int jj = j; jj < m && f; ++jj)
                    {
                        if (a[i][j] == a[ii][jj])
                        {
                            b[k++] = a[i][j];
                            f = false;
                        }
                    }
                }
            }
        }
    }
    int max = b[0];
    for (int f = 0; f < (n * m / 2); f++)
    {
        if (b[f] > max)
        {
            max = b[f];
        }

    }
    cout << max;
}

