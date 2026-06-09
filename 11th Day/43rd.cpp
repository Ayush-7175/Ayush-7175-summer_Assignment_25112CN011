#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{    
   
    if (n <= 1) {
        return false;
    }

    int count = 0;
    
   
    for(int i = 1; i <= n; i++) 
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    
   
    if (count == 2) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if(prime(n))
    {
        cout << "prime";
    }
    else {
        cout << "not prime";
    }

    return 0;
}