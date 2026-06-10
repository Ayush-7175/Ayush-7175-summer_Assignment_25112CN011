#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter number of elements :";
    cin>>n;
    int x=0;
    int y=0;
    int arr[n];
    int arr2[100];
    int arr3[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int j=0;j<n;j++)
    {
        
        if(arr[j]%2==0)
        {
            arr2[x]=arr[j];
            x++;
        }
        
        else if(arr[j]%2!=0)
        {
            arr3[y]=arr[j];
            y++;
        }
    }

    for(int m=0;m<x;m++)
    {
        cout<<arr2[m];
    }
    cout<<endl;
 for(int p=0;p<y;p++)
    {
        cout<<arr3[p];
    }



    }