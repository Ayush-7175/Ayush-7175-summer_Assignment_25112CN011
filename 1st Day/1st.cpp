//Write a program to Calculate sum of first N Natural NUmbers
#include<iostream>
using namespace std;
int main()
{
    int sum=0;
int n;
cout<<"enter number till which u want to add";
cin>>n;
for(int i =0;i<=n;i++)
{
    sum=sum+i;
}
cout<<"sum is "<< sum;
return 0;

}

