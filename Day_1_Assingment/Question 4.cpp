#include <bits/stdc++.h>
using namespace std;
bool isValidString(string url)
{
    if (url.empty())
    {
        return false;
    }

    const regex pattern("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");

    if (regex_match(url, pattern))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string url;
    cin >> url;

    if (isValidString(url))
    {
        cout << "This String is Valid";
    }
    else
    {
        cout << "Not a Valid String";
    }
    return 0;
}