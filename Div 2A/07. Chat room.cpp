#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string a="hello!";          //To check is a subsequence of a given string is hello.
    int n=str.size(), j=0,i;
    
    for(i=0;i<n;i++)
    {
        if(str[i]==a[j])
            j++;
    }
    
    if(j==5)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
        
    return 0;
}
