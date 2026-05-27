// Write a program to Print prime numbers in a range
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int prime = 0;
    int count = 0;
    int n;
    cin >> n;
    int m;
    cin >> m;
    if (n < 0)
    {
        n = abs(n);
    }

    while (n <= m)
    {

        if (n == 1 || n == 0)
        {
            n++;
            continue;
        }

        else if (n == 2)
        {
            prime++;

            cout << n << ", ";
            n++;
            continue;
        }
        for (int i = 2; i < n; i++)
        {

            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            prime++;
            cout << n << ", ";
        }
        n++;
        count = 0;
    }
    if (prime > 0)
    {
        cout << "all theese are prime";
    }
    else
    {
        cout << "no prime numbers found";
    }

    return 0;
}