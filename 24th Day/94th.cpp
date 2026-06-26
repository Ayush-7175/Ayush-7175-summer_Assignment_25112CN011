//compress a string
#include<bits/stdc++.h>
using namespace std;
int main(){
  string str="aaaabbccc";
  int count=1;

  int j=0;
  for(int i=0;i<str.length();i++)
  {  
    while(i<str.length()-1&&str[i]==str[i+1])
    {
      count++;
      i++;
    }
      
      str[j]=str[i];
      j++;
  
    if(count>1)
    {
     string a =to_string(count);
       for(int k=0;k<a.length();k++)
       {
        str[j]=a[k];
        j++;
       }

    }
    count=1;
    
  }
  str.resize(j);
  cout<<str;
}

   
    

