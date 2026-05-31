//Write a program to Generate Fibonacci series.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
     cin>> n;
     if (n <= 0) return 0;
    int n1=0;
        int n2=1;
       int fib=n1+n2;
      
    cout<<n1 <<" ";
    if (n == 1) return 0;
   cout << n2<<" ";
   if (n == 2) return 0;
    cout<< fib << " ";
    for(int i=3;i<n;i++)
    {    
        n1=n2;
        n2=fib;
        fib=n1+n2;
    cout<<fib<<" ";

    }
    return 0;
}