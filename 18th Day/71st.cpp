// Write a program to Binary search
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of elements in the array in sorted manner ";
    cin >> n;
    vector<int> v(n);
    cout << "enter the elements ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int target;
    cout << "Enter the targeted element ";
    cin >> target;
    int start = 0;
    int end = n-1;
    int middle = (start + end) / 2;
    while (start <= end)
    {

        if (v[middle] == target)
        {
            cout << "target  index is " << middle;
            return 0;
        }

        if (v[middle] > target)
        {
            end = middle-1;
            middle = (start + end) / 2;
        }

        else if (target > v[middle])
        {
            start = middle+1;
            middle = (start + end) / 2;
        }
    }
}