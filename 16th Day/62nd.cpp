#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int frequency;
    cout<<"enter no of elements ";
    cin>>n;
    int ans;
    int arr [n];
    int max=0;
    cout<<"enter elements of array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    frequency=0;
    for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                frequency++;
            }

        }
         if(max<frequency)
         {   
            max=frequency;
            ans=arr[i];
         }
    }

    cout<<"max freq element is " << ans;
}
   