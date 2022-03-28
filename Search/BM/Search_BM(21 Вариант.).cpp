#include <iostream>                   /* 21 вариант. Найти и удалить первое вхождение подстроки strl */
using namespace std;

int BMsearch(string str, string substr)
{
    int st = str.size();
    int sbst = substr.size();
    int res = -1;
    if (st != 0 && sbst != 0)
    {
        int pos;
        int b[256];
        for (int i = 0; i < 256; i++)
        {
            b[i] = sbst;
        }
        for (int i = sbst - 2; i >= 0; i--)
        {
            if (b[int((unsigned char)substr[i])] == sbst)
            {
                b[int((unsigned char)substr[i])] = sbst - i - 1;
            }
        }
        pos = sbst - 1;
        while (pos < st)
        {
            if (substr[sbst - 1] != str[pos])
            {
                pos += b[int((unsigned char)str[pos])];
            }
            else
            {
                for (int i = sbst - 1; i >= 0; i--)
                {
                    if (substr[i] != str[pos - sbst + i + 1])
                    {
                        pos += b[int((unsigned char)str[pos - sbst + i + 1])];
                        break;
                    }
                    else if (i == 0)
                    {
                        return pos - sbst + 1;
                    }
                }
            }
        }
    }
    return res;
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
    res = BMsearch(str, strl);
    for (int i = res; i < res + strl.size(); i++)
    {       
        str.erase(res, 1); // (index, count)  1 - кол-во вхождений i-того символа
    } 
    cout << str;
    return 0;
}