// Write a program to Add matrices.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of elements in the first matrix ";
    cin >> n;
    vector<int> v(n);
    
    cout << "enter the elements ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    vector<int> v1(n);
    
    cout << "enter the elements in the second matrix ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v1[i];
    }

    vector<int> v3(n);
    for (int i = 0; i < v.size(); i++)
    {
        v3[i] = v[i] - v1[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v3[i]<<" ";
    }

}

