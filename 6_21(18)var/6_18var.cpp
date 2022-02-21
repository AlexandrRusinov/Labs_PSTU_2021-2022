#include <iostream>
#include <cmath>
#include <string>
using namespace std;
string WordSort(int n, string s)
{
	string s2 = "";
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] != ' ' and s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' && s[i] != '6' && s[i] != '7' && s[i] != '8' && s[i] != '9')
		{
			d += 1;
		}
		else
		{
			if (s[i - d] > s[i+1])
			{
				for (int j = i - d; j < i + 1; j++)  // оставляем
				{
					s2 = s2 + s[j];
					d = 0;
				}
			}
			else
			{
				int ii = i+1;
				int kk = i+1;
				for (int k = ii; s[k] != ' '; k++)  // заменяем
				{
					s2 = s2 + s[k];
				}
				s2 = s2 + ' ';
				for (int j = i - d; j < i + 1; j++) 
				{
					s2 = s2 + s[j];
					
				}
				i += d -1;
				d = 0;
			}
		}
	}
	return s2;
}
int main()
{
	string s = "proverka raboty algoritma";
	s = s + " ";
	cout << WordSort(s.size(), s);
	return 0;
}