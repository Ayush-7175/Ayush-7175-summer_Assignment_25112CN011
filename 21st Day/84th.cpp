//Write a program to Convert lowercase to uppercase
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int count=0;
  string str = "HelloWorld";
        for (int i = 0; str[i] != '\0'; i++) {
       
        if (str[i] >= 'a' && str[i] <= 'z') {
            
            str[i] = str[i] - 32;
        }
    }

    cout<<"string is "<<str;
    return 0;

}   

  


