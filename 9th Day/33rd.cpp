#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cout<<"enter number of rows u want";
    cin>>n;
    for(int i=n-1;i>=0;i--)
    {
    for(int j=0;j<=i;j++)
    {
         cout<<"*";
    }
    cout<<endl;
    }
    return 0;

}