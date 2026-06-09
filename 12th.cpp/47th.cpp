#include <iostream>
using namespace std;

void fib(int n)
{
    if (n <= 0) return; 
    
    int n1 = 0;
    int n2 = 1;

    
    cout << n1 << " ";
    if (n == 1) return;

  
    cout << n2 << " ";
    if (n == 2) return;

 
    for (int i = 3; i <= n; i++) 
    {    
        int nextTerm = n1 + n2;
        cout << nextTerm << " ";
        
       
        n1 = n2;
        n2 = nextTerm;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    
    fib(n);
    
    return 0;
}