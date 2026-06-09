//Write a program to Write function for Armstrong
#include<bits/stdc++.h>
using namespace std;
int digit(int n)
{      
   int  digits=0;
   while(n>0)
    {   
        digits++;
        n=n/10;
    }
    return digits;
}

int armstrong(int n)
{
    int arm=0;
    int dig=digit(n);
     while(n>0)
    {
        int rem = n%10;
        arm = round(pow(rem, dig)) + arm;
        n=n/10;
        
    }
    return arm;
}


int main()
{
    int n;
    cout<<"enter number ";
    cin>>n;
    int n1=n;
    int ans=armstrong(n);
    if(n1==ans)
    {
        cout<<"yes armstrong";
    }
    else{
        cout<<"not an armstrong";
    }
     
}   