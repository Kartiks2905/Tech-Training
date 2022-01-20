#include <bits/stdc++.h>
using namespace std;
class StringUtils
{
public:
    string s;
    char c;

    int countChar(string str, char ch);
    void ReverseString(string str);
    bool isVowel(char ch);
    string reverseVowel(string str);
    bool checkPattern(string str1, string str2);
};
int StringUtils::countChar(string str, char ch)
{
    s = str;
    c = ch;
    int res = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == c)
            res++;

    return res;
}
void StringUtils::ReverseString(string str)
{
    s = str;

    for (int i = s.length() - 1; i >= 0; i--)
        cout << s[i];
}
bool StringUtils::isVowel(char ch)
{
    c = ch;
    return (c == 'a' || c == 'A' || c == 'e' ||
            c == 'E' || c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' || c == 'u' ||
            c == 'U');
}
string StringUtils::reverseVowel(string str)
{
    s = str;
    int i = 0;
    int j = str.length() - 1;
    while (i < j)
    {
        if (!isVowel(str[i]))
        {
            i++;
            continue;
        }
        if (!isVowel(str[j]))
        {
            j--;
            continue;
        }

        // swapping
        swap(str[i], str[j]);

        i++;
        j--;
    }

    return str;
}
bool StringUtils::checkPattern(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    if (n1 != n2)
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;

    return true;
}
int main()
{
    StringUtils s1;
    StringUtils s2;

    return 0;
}