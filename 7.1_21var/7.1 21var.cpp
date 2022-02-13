#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int task(int n, int a[])
// находит количество отрицательных элементов для массива типа int
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			k += 1;
		}
	}
	return k;
}
int task(int n, string s1)//  lal lal lal
{
	int c = s1.size();
	int k = 0;
	int d = 0;
	for (int i = 0; i < c; i++)
	{
		if (s1[i]!=' ')
		{
			d += 1;
		}
		else
		{
			if (s1[d-1] == s1[i - d])
			{
				k += 1;
			}
			else
			{
				d = 0;
			}
		}
	}
	return k;

}
int main()
{
	string s1 = "lal lal lal";
	s1 = s1 + " ";
	int a[] = { -10, -20, -30, 50, 60 };
	cout << task(s1.size(), s1) << endl;
	cout << task(6, a) << endl;
	return 0;
}