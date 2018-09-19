#include<bits/stdc++.h>
using namespace std;

int min(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int main()
{
    int n,m,i,j,moves;
    cin>>n>>m;
   moves=min(n,m);          //And not (n+m)/2
    
    if(moves%2 == 0)
    {
        cout<<"Malvika";
    }
    else
        cout<<"Akshat";
    
    return 0;
}
