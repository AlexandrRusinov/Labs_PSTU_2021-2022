#include <iostream>
#include <string>
using namespace std;

int KMPsearch(string str, string templ)
{
	int i, j, strlen, templlen;
	strlen = str.length();
	templlen = templ.length();
	int* d = new int[templlen];
	i = 0;
	j = -1;
	d[0] = -1;
	while (i < templlen - 1)
	{
		while ((j >= 0) && (templ[j] != templ[i]))
		{
			j = d[j];
		}
		i++;
		j++;
		if (templ[i] == templ[j])
		{
			d[i] = d[j];
		}
		else
		{
			d[i] = j;
		}
		i = 0;
		j = 0;
		for (i = 0, j = 0; (i <= strlen - 1) && (j <= templlen - 1); i++, j++)
		{
			while ((j >= 0) && (templ[j] != str[i]))
			{
				j = d[j];
			}
		}
		delete[] d;
		if (j == templlen)
		{
			return i - j;
		}
		else { return -1; }
	}
}
int main()
{
	int res;
	setlocale(LC_ALL, "ru");
	string str, strl;
	cout << "Введите строку: ";
	cin >> str;
	cout << "Введите подстроку: ";
	cin >> strl;
	res = KMPsearch(str, strl);
	cout << res;
	return 0;
}
