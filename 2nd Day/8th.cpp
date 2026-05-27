//Write a program to Check whether a number is palindrome
#include <Bits/stdc++.h>
using namespace std;
int main(){
int n;
int reverse=0;
cout<<"enter the number to be reversed";
cin>> n ;
int n1=n;
while(n>0){
 int remainder=n%10;
reverse=reverse*10+remainder;
n=n/10;

}

if(reverse==n1){
    cout<<"number is palindrome";
}
else
{
    cout<<"not a palindrome";
}
return 0;
}
