#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,t;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
        
    int max=0, min=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[max])        //Picking the max closest to the left end
            max=i;
        if(a[i]<=a[min])         //Picking the min closest to the right end
            min=i;
    }
    
    t=(max-0) + (n-1 - min);
    if(min<max)                 //One less swap if they need to cross each other
        t--;
        
    cout<<t;
    return 0;
}
