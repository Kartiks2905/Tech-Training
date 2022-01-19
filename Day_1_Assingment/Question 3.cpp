#include <bits/stdc++.h>
using namespace std;
bool isPrime(string s)
{
    int number;
    number = stoi(s);
    for (int i = 2; i < sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool LargestNumber(int n)
{
    string s = n + "";
    int i = 0;
    while (i < s.length())
    {
        if (isPrime(s[i] + ""))
        {
            i++;
        }
        else
            break;
    }
    if (i == s.length())
    {
        return true;
    }
    else
    {
        return false;
    }
}
