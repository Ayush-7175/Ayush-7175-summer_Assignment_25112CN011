#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the desired sum: ";
   cin>>n;
   int N;
   cout<<"enter the number of elements in array ";
   cin>>N;
   vector<int> v(N);
   for(int i=0;i<N;i++)
   {
      cin>>v[i];
   }

   sort(v.begin(),v.end());
   int A=0;
   int B=v.size()-1;
   while(A!=B)
   {

       if(v[A]+v[B]==n)
       {
        cout<<"desired pair is "<<v[A]<<" and "<<v[B];
        return 0;
       }

      if(v[A]+v[B]>n)
      {
         B--;
      }
      if (v[A]+v[B]<n)
      {
         A++;
      }

   }

cout<<"NO Pair  FOUND ";

}