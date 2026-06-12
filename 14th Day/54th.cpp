//Write a program to Frequency of an element.
#include<bits/stdc++.h>
using namespace std;
int main()
{   int f=0;
    int n;
    cout<<"Enter no of elements ";
    cin>>n;
    int arr[n];
    int key;
    cout<<"Enter number whose frequency needs to be found ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            f++;
        }
    }

    if(f>0)
    cout<<"frequency is "<<f;
    else{
        cout<<"element not present ";
    }

}