#include<bits/stdc++.h>
using namespace std;
int main()
{   int sum=0;
    int n;
    vector<int> perfect;
    cout<<"enter value of n ";
    cin>>n;
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
     
    if(sum==n)
    {
        cout<<"number is perfect";
    }
    
    else
    {
        cout<<"You are either perfect or you are not me ";
    }

    return 0;



}