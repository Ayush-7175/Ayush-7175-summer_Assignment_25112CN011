//Write a program to Find column-wise sum
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cout << "Enter size of square matrix (M): ";
    cin >> m;

    int arr[m][m];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
        int sum=0;

        for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<"sum of "<<(i+1)<<"' column is "<<sum<<endl;
        sum=0;
    }

}

    