//Write a program to Move zeroes to end
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    int n;
    cout<<"enter no of elements ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]==0)
        {
            v.erase(v.begin()+i);
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        v.push_back(0);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}