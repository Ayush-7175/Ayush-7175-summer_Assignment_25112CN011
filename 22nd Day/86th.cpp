//Write a program to Count words in a sentence
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string sentence;
    cout<<"enter the sentence ";
    getline(cin,sentence);
    for(int i=0;i<sentence.length();i++)
    {
        if(sentence[i]==' ')
        {
            count++;
        }
    }
    cout<<"no of words in sentence are "<<(count+1);
}