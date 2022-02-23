#include <iostream>
#include <cmath>
#include <stdarg.h>  
using namespace std;

int GetAngles(int n, ...)
{
    float cosa, ang;
    const float pi = 3.14;
    va_list param;
    va_start(param , n);
    for (int i = 0; i < n - 1; i++)
    {
        float* a = new float[2];
        float* b = new float[2];
        a[0] = va_arg(param, float);
        b[0] = va_arg(param, float);
        cosa = ((a[0] * a[1]) + (b[0] * b[1])) / (pow((pow(a[0], 2) + pow(b[0], 2)), 0.5) * pow((pow(a[1], 2) + pow(b[1], 2)), 0.5)); //вычисляем угол между векторами
        ang = acos(cosa) / pi * 180;
        cout << ang << endl;
        delete[]a;
        delete[]b;
    }
    va_end(param);
    return 0;
}
int main()
{
    float a[2] = { 4, 0 }; // векторы
    float b[2] = { 2, -2 };
    float c[2] = { 4, 0 };
    float d[2] = { 2, -2 };
    float e[2] = { 4, 0 };
    float f[2] = { 2, -2 };
    float g[2] = { 4, 0 };
    float h[2] = { 2, -2 };
    float l[2] = { 4, 0 };
    float j[2] = { 2, -2 };
    float k[2] = { 4, 0 };
    cout << GetAngles(3, a, b, c) << endl;
    //cout << GetAngles(9, a, b, c, d, e, f, g, h, l) << endl;
    //cout << GetAngles(11, a, b, c, d, e, f, g, h, l, j, k) << endl;

    return 0;
}
