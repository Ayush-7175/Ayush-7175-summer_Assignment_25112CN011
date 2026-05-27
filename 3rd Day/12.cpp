// Write a program to Find GCD of two numbers
#include <Bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> v;
    vector<int> v1;
    vector<int> v2;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
        }
    }
    for (int i = 1; i <= m; i++)
    {
        if (m % i == 0)
        {
            v1.push_back(i);
        }
    }
    int temp = max(n, m);
    for (int j = 0; j < v.size(); j++)
        for (int i = 0; i < v1.size(); i++)
        {
            if (v[j] == v1[i])
            {
                v2.push_back(v[j]);
            }
        }
         auto it = max_element(v2.begin(), v2.end());
        
        int  gcd = *it;
        int lcm=(n / gcd) * m;
        cout<< "lcm is "<< lcm;
        return 0;

    
}