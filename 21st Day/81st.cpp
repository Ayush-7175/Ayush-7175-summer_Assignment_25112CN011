//Write a program to Find string length wihtout length.
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int count=0;

    char str[100];
    cin.getline(str, 100);

    while(str[count]!='\0')
    {
        count++;
    }
    cout<<"lenght is "<<count;
    

}