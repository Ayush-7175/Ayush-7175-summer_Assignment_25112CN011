//Write a program to Reverse array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of elements ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}