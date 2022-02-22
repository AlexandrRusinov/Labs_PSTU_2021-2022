#include <iostream>
#include <cmath>
#define M_PI 3.14
#include <stdarg.h>  
using namespace std;

float angles(int n, ...)
{
    float cosa, ang;
    va_list angles;  
    va_start(angles, n);
    for (int i = 0; i < n; i++)
    {
        int a[] = va_arg(angles, int);
        int b[] = va_arg(angels, int);
        cosa = ((a[0] * b[0]) + (a[1] * b[1])) / (pow((pow(a[0], 2) + pow(a[1], 2)), 0.5) * pow((pow(b[0], 2) + pow(b[1], 2)), 0.5)); //вычисляем угол между векторами
        ang = acos(cosa) / M_PI * 180
    }
    va_end(angles);
    return ang;
}
int main()
{
    float a[2] = { 4, 0}; // векторы
    float b[2] = { 2, -2};
    float c[2] = { 4, 0 };
    float d[2] = { 2, -2 };
    float e[2] = { 4, 0 };
    float f[2] = { 2, -2 };
    float g[2] = { 4, 0 };
    float h[2] = { 2, -2 };
    float l[2] = { 4, 0 };
    float j[2] = { 2, -2 };
    float k[2] = { 4, 0 };
    cout << angles(3, a, b, c);
    cout << angles(9, a, b, c, d, e, f, g, h, l);
    cout << angles(11, a, b, c, d, e, f, g, h, l, j, k);

    return 0;
}