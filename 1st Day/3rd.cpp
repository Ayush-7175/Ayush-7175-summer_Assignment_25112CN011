//Write a program to Find factorial of a number
#include<iostream>
using namespace std;
int main()
{
    int factorial=1;
    int n;
     cin>>n;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }

    cout<<"factorial is "<< factorial;
}