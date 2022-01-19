#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return true;
    }
    return false;
}
bool validName(string s)
{
    map<string, int> mp;
    map<string, int>::iterator it;
    for (int i = 0; i < s.length(); i++)
    {
        if (isVowel(s[i]))
        {
            it->second++;
        }
    }
    if (it->second > 1)
    {
        return false;
    }
    if (s.size() >= 3 && s.find('S') && s.find_last_of('S'))
    {
        
    }
}
int main()
{

    return 0;
}