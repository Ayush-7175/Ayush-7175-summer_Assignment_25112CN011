#include<Bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int product=1;
   while(n>0)
   {
    int rem=n%10;
    product=product*rem;
    n=n/10;
   }

   cout<<"product of digits is "<< product;
   return 0;
}