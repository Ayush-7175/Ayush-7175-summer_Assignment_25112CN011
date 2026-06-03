// Write a program to Convert decimal to binary

#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> n1;
    int n;
    int rem;
    cout << "enter decimal number ";
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    while (n > 0)
    {
        rem = n % 2;
        if (rem == 0)
        {
            n1.push_back(0);
            n = n / 2;
            continue;
        }

        if (rem == 1)
        {
            n1.push_back(1);
            n = n / 2;
        }
    }
    for (int i = n1.size() - 1; i >= 0; i--)
    {
        cout << n1[i];
    }
    return 0;
}