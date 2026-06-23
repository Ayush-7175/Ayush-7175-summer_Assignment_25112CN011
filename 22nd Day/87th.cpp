//Write a program to Character frequency
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string sentence;
    cout<<"enter the sentence ";
    getline(cin,sentence);
    char target;
    cout<<"enter the tageted char ";
    cin>>target;
    int freq=0;
    for(int i=0;i<sentence.length();i++)
    {
        if(sentence[i]==target)
        {
            freq++;
        }
    }
    cout<<"no of times the tageted element appears is "<<freq;

}
    