// Write a program to print the below pattern:
// (N should be an odd number and the value of N should be more than 4)
// Output:
//         \*****/
//         *\***/*
//         **\*/**
//         ***/***
//         **/*\**
//         */***\*
//         /*****\

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 1;
    int l = n;
    if (n > 4 && n % 2 != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == k)

                    cout << "\\";

                else if (j == l)

                    cout << "/";

                else

                    cout << "*";
            }
            k++;
            l--;
            cout << endl;
        }
    }
    else
    {
        cout<<"Sorry Nothing to Print";
    }

    return 0;
}