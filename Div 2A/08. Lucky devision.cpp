#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int a[14] = {4,7,44,47,74,77, 444,447,474,477,744,747, 774, 777};
    
    for(int i=0;i<14;i++)
        if(num%a[i]==0)
        {
            cout<<"YES";
            return 0;
        }
        
    cout<<"NO";
    return 0;
}
