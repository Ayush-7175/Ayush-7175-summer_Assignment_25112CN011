// /Write a program to Merge arrays
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    vector<int> merged;

    for (int i = 0; i < n1; i++)
    {
        merged.push_back(arr1[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        merged.push_back(arr2[i]);
    }

    cout << "Merged array: ";
    for (int i = 0; i < merged.size(); i++)
    {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}