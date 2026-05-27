//Write a program to Reverse a number
#include <Bits/stdc++.h>
using namespace std;
int main(){
int n;
int reverse=0;
cout<<"enter the number to be reversed";
cin>> n ;

while(n>0){
 int remainder=n%10;
reverse=reverse*10+remainder;
n=n/10;

}
cout<<"reversed number is " << reverse;

return 0;
}
