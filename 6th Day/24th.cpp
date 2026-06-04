#include<bits/stdc++.h>
using namespace std;
int main(){
int pow;
int n;
cout<<"enter number ";
cin>>n;
cout<<"enter power ";
cin>>pow;
if(pow==0)
{
    cout<<"1";
    return 0;
}
int ans=1;
for(int i=0;i<pow;i++)
{
     ans=ans*n;
}
cout<<ans;
return 0;


}