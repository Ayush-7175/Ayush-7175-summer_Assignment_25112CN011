//Write a program to Rotate array left.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of elements ";
    cin>>n;
    int arr[n];
    cout<<"no of rotations";
    int a;
    cin>>a;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp =arr[n-1];
    for(int j=0;j<a;j++)
    {
    temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
       arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}