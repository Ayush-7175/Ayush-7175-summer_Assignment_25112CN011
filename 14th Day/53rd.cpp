#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int o;
    int loc = -1;
    cout<<"enter number to be found";
    cin>>o;
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    int arr[n];
   
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }

     int key=arr[0];
     for(int j=0;j<n;j++)
     {
        if(key==o)
        {
            loc=j;
            cout<<"location is " <<loc;
            return 0;
        }
        else{
            key++;
        }
     }
     if(loc==-1)
     {
        cout<<"element not found";
     }
}

   
