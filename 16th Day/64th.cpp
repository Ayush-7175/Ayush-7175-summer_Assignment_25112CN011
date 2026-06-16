//Write a program to Remove duplicates from array
#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n;
   cout<<"enter the number of elements in array ";
   cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++)
   {
      cin>>v[i];
   }
int count;
   for(int i=n-1;i>0;i--)
   {count=0;
    for(int j=0;j<v.size();j++)
    {
        if(v[i]==v[j]&&j!=i)
        {
          count++;
        }
    }
    if(count>0)
    {
        v.erase(v.begin()+i);
    }
}
 for(int i=0;i<v.size();i++)
   {
      cout<<v[i]<<" ";                                              
   }


}