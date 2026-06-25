#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"enter the string ";
    cin>>str;
    int count=0;
    int current=-1;
    char result=str[0];
    for(int i=0;i<str.length();i++)
    {
      count=0;
     for(int j=0;j<str.length();j++)
     {
         if(str[j]==str[i])
         {
            count++;
         }
     }
     if(current<count)
      {
      current=count;
      result=str[i];
      }
    
    }   

    cout<<"highest occouring element is "<<result<<" and its freq is "<<current;

}
