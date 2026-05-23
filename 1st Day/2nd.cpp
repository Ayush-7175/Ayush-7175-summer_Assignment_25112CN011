//Write a program to Print multiplication table of a Given number 
#include<iostream>
using namespace std;
int main (){
int n;
cin>> n;
int product=1;
for(int i=0;i<=10;i++){

   product=(n*i);
    cout<< n << " times " << i << " is "<< product << "\n";
}


return 0;




}
