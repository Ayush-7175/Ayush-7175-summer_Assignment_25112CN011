//Write a program to Find missing number in array 
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cout<<"enter the range from 0 to the number u want ";
   cin>>n;
   int sum= n*(n+1)/2;
   int actual_sum=0;
   int arr[n-1];
   for(int i=0;i<n-1;i++)
   {
    cin>>arr[i];
    actual_sum=actual_sum+arr[i];
   }
   
   int ans;
   ans=sum-actual_sum;
   cout<<"missing element is "<<ans;
   
}