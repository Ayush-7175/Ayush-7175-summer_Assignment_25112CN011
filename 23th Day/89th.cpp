// 3sum to a 0
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {-3, -1, 0, 1, 2, 3};
    int min = v[0];
    int max = v[v.size()-1];
    for (int i = 0; i < v.size(); i++)
    {   
        if (i > 0 && v[i] == v[i - 1]) continue;
        bool count = true;
        min = i+1;
        max = v.size()-1;
        while(max>min)
        {
            if (min == i) { min++; continue; }
            if (max == i) { max--; continue; }
            
            if ((v[min] + v[max] + v[i]) == 0 && count)
            {
                cout << "triplets are" << " " << v[min] << " " << v[max] << " " << v[i]<< " ";
                count = false;
                 break;
            
            }
            if ((v[min] + v[max] + v[i]) > 0 )
            {
                max--;
                continue;

            }

            if ((v[min] + v[max] + v[i]) < 0 )
            {
                min++;
            }
        }
        
    }
}
