//Write a program to Remove spaces from string;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string sentence;
    cout<<"enter the sentence ";
    getline(cin,sentence);
    for(int i=sentence.length()-1;i>0;i--)
    {
        if(sentence[i]==' ')
        {
            sentence.erase(i,1);
        }
    }
    cout<<sentence;
}