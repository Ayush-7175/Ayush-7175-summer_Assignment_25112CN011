//Write a program to Find largest and smallest
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int largest=arr[0];
    int smallest=arr[0];
    for(int j=1;j<n;j++)
    {
        if(largest<arr[j])
        {
            largest=arr[j];
        }

        if(smallest>arr[j])
        {
            smallest=arr[j];
        }
    }   

    cout<<"smallest is "<<smallest<<endl;
    cout<<"largest is "<<largest;
}