//Write a program to Check Armstrong number
#include<bits/stdc++.h>
using namespace std;
int main()
{   int armstrong = 0 ;
    int n;
    cout<<"enter integer to be checked as armstrong";
    cin>>n;
    int digit =0;
    int n1=n;
    while(n>0)
    {   
        digit++;
        n=n/10;
    }

    n=n1;
    while(n>0)
    {
        int rem = n%10;
        armstrong = round(pow(rem, digit)) + armstrong;
        n=n/10;

    }
    if(armstrong==n1)
    {
        cout<<"armstrong ";
    }

    else 
    {
        cout<<"not armstrong";
    }
    return 0;



    
}