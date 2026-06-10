#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"sum is "<<sum;
    cout<<endl;
    cout<<"avg is "<<(sum/n);
    
}
