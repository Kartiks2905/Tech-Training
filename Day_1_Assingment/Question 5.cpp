#include <bits/stdc++.h>
using namespace std;
int Gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return Gcd(b, a % b);
}
int Lcm(int a, int b)
{
    return (a / Gcd(a, b)) * b;
}
int main()
{
    int ans = 1;
    for (int i = 2; i <= 9; i++)
    {
        ans = Lcm(ans, i);
    }
    cout << ans;
    return 0;
}