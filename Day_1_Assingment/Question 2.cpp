#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, firstDigit, lastDigit, digits, swappedNum;
    scanf("%d", &n);

    lastDigit = n % 10;

    digits = (int)log10(n);

    firstDigit = (int)(n / pow(10, digits));
    swappedNum = lastDigit;
    swappedNum *= (int)round(pow(10, digits));
    swappedNum += n % ((int)round(pow(10, digits)));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;
    printf("%d", swappedNum);
    return 0;
}