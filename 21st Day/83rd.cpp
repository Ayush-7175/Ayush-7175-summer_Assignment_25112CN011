//Write a program to Count vowels and consonant
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
  string str = "HelloWorld";
  for(int i=0;i<str.length();i++)
  {

    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='a')

    {
        count++;
    }


  }

  cout<<"No of vowels are "<<count<<" ";
  cout<<"No of consonants are "<<(str.length()-count);



}
