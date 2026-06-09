//Write a program to Write function for perfect number;
#include<bits/stdc++.h>
using namespace std;
int perfect(int n)
{
    vector<int> perfect;
    int sum=0;
     for(int i=1;i<n;i++)
    {
       if(n%i==0)
       {
        perfect.push_back(i);
       }
    }

    for(int i=0;i<perfect.size();i++)
    {
       sum=sum+perfect[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    int ans=perfect(n);
    if(ans==n)
    {
        cout<<"yes perfect number";
    }
    else{
        cout<<"no not perfect";
    }
}
