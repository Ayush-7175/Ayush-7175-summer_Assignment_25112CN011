// Write a program to Recursive factorial
#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{

    if (n == 0)
    {

        return 1;
    }

    while (n != 1)

    {
        int fact = n * factorial(n - 1);
        return fact;
    }
}
int main()
{

    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans;
    return 0;
}