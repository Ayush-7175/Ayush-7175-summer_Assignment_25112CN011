//Write a program to Find nth Fibonacci term

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
     cin>> n;
     if (n <= 0) return 0;
    int n1=0;
        int n2=1;
       int fib=n1+n2;
      
        for(int i=3;i<=n;i++)
    {    
        n1=n2;
        n2=fib;
        fib=n1+n2;
    

    }
    cout<<fib<<" ";
    return 0;
}