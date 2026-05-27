#include<iostream>
using namespace std;
int main()
{   int count =0;
    int digits;
    int n;
    cin>> n;
    while(n>0)
    {
        
        n=n/10;
        count++;
    }

    cout<< "no of digits is " << count;

}