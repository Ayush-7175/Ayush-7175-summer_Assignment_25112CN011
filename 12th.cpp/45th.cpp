//Write a program to Write function for palindrome
#include<bits/stdc++.h>
using namespace std;
int rev(int n)
{
    
    int rev=0;
    while(n>0)
    {
       int rem=n%10;
       rev=rev*10+rem;
       n=n/10;
    }
    return rev;
}

int main(){
int n;
cout<<"enter a number";
cin>>n;
int ans=rev(n);
if(ans==n)
{
    cout<<"number is palindrome";
}
else{
    cout<<"not a palindrome";
}

return 0;

}
