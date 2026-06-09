#include <bits/stdc++.h>
using namespace std;
int largest(int n,int m)
{     
    
    
    if(n>m)
    {
        return n;
    }

    if(n<m)
    {
        return m;
    }
    
}
int main()
{
    int n;
    int m;
    cout<<"enter numbers";
    cin>>n>>m;
    int ans=largest(n,m);
    cout<<ans;
    return 0;

}