#include <bits/stdc++.h>
using namespace std;
int LongestSubstring(string s)
{
    vector<int> mpp(256, -1);
    int left = 0;
    int right = 0;
    int len = 0;
    int lenght = s.length();

    while (right < lenght)
    {
        if (mpp[s[right]] != -1)
            left = max(left, mpp[s[right]] + 1);
        mpp[s[right]] = right;

        len = max(len, right - left + 1);
        right++;
    }
    return len;
}
int main()
{
    string str;
    getline(cin, str);
    cout << LongestSubstring(str);
    return 0;
}