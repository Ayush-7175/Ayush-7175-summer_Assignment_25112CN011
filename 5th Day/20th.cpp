// /Write a program to Find largest prime factor.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> n2;
    vector<int> n1;
    int n;
    int count = 0;
    cout << "enter the number";
    cin >> n;
    if (n == 1)
    {
        cout << "1 has no prime factors";
        return 0;
    }
    int prime = -1;
    if (n == 2)
    {
        cout << n;
        return 0;
    }
    int count1 = 0;
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            count1++;
        }
    }
    if (count1 == 0)
    {
        cout << n;
        prime = n;
    }

    if (n != prime)
    {

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                n1.push_back(i);
            }
        }

        for (int i = 0; i < n1.size(); i++)
        {
            for (int j = 2; j < n1[i]; j++)

            {
                if (n1[i] % j == 0)

                {
                    count++;
                }
            }
            if (count == 0)
            {
                n2.push_back(n1[i]);
            }
            count = 0;
        }

        int max_val = *max_element(n2.begin(), n2.end());
        cout << max_val;
    }
}