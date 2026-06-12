#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int a;
   cout<<"enter number of elements ";
   cin>>a;
   vector <int> v(a);
   vector<int> duplicate_elements;
   cout<<"enter elements ";
   for(int i=0;i<a;i++)
   {
    cin>>v[i];
   }
   for(int i=a-1;i>=0;i--){
   int count=0;
   bool duplicate = false;
   for(int j=0;j<a;j++)
   {
      if(v[i]==v[j])
      {
        count ++;
        {
            if(j>i)
            {
                duplicate=true;
            }
        }
      }
   }
   if (count==1||duplicate)
   {
    v.erase(v.begin()+i);
    
   }
    
    
}
 for(int i=0;i<v.size();i++)
   {
     cout<<v[i];
   }
}