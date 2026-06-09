// /Write a program to Write function to find factorial
#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    int fact=1;
         for (int i=1;i<=n;i++){
            fact=fact*i;
         }
         return fact;
}

int main()
{
    int a;
    cout<<"enter number";
    cin>>a;
    int ans=factorial(a);
    cout<<ans;
    return 0;
}