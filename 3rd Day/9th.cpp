//Write a program to Check whether a number is prime
#include<Bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0)
    {
        n=abs(n);
    }
    if(n==1||n==0)
        {
            cout<<"not prime";
            return 0;
        }

        else if (n==2)
        {
            cout<<"prime";
            return 0;
        }
    int count=0;
    for(int i=2;i<n;i++)
    {
        
       
     if(n%i==0)
        {
            count++;
            
        }

        
    }
    if(count == 0)
    {
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}
