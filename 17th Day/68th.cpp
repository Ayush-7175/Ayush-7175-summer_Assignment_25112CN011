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

     for(int i=merged.size()-1;i>=0;i--)
{
    int count1=0;
    int count2=0;
    bool duplicate=false;

    // check in first array as it needed here fr
    for(int j=0;j<arr1.size();j++)
    {
        if(merged[i]==arr1[j])
        {
            count1++;
        }
    }

    // check in second array same reason..
    
    for(int j=0;j<arr2.size();j++)
    {
        if(merged[i]==arr2[j])
        {
            count2++;
        }
    }

    // remove extra copies from merged
    for(int j=0;j<merged.size();j++)
    {
        if(merged[i]==merged[j] && j>i)
        {
            duplicate=true;
        }
    }

    if(count1==0 || count2==0 || duplicate)
    {
        merged.erase(merged.begin()+i);
    }
}