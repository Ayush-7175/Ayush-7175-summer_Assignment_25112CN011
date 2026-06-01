//Write a program to Check strong number
#include<bits/stdc++.h>
using namespace std;
int main()
{  int rem=0;
    int sum=0;
   int n;
   cout<<"enter value of n";
   cin>>n;
   int fact=1;
   int n1=n;
   while(n>0)
   {
     rem=n%10;
     for(int i=1;i<=rem;i++)
     {
        fact=fact*i;
     }
     sum=sum+fact;
     fact=1;
     n=n/10;

   }
   if(sum==n1)
   {
    cout<<"strong number";
   }
   else
   {
    cout<<"not strong";
   }
}