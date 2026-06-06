//Write a program to Recursive Fibonacci
#include<bits/stdc++.h>
using namespace std;
int fibonaci(int n)
{     
    if(n==0)
    {
        return 0;
    }
    
    if(n==1)
    {
        return 1;
    }
    
        int fib=fibonaci(n-1)+fibonaci(n-2);
         return fib;
}
int main()
{
   int n;
   cout<<"enter the number till which you want fibboncai";
   cin>>n;
   for (int i = 0; i < n; i++) 
   {
    cout<<fibonaci(i)<<" ";
   }
   return  0;

}