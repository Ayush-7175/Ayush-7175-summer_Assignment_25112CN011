// Selection sort
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of elements in the array ";
    cin >> n;
    vector<int> v(n);
    int counter;
    cout << "enter the elements ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int min = v[0];
    for (int i = 0; i < n; i++)
    {
        min = v[i];
        counter=i;
        for (int j = n - 1; j > i; j--)
        {
            if (min > v[j])
            {
                min = v[j];
                counter=j;
            }
        }
        int temp=v[counter];
        v[counter]=v[i];
        v[i]=temp;
       

    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
