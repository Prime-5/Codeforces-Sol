#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    str+="!!!!!!";
    int i,n=str.size();
    for(i=0;i<n;)
    {
        
        while(!(str[i]=='W' && str[i+1] == 'U' && str[i+2]=='B'))
        {

	    if(str[i]=='!')
            return 0;
            cout<<str[i];
            i++;
        }
        i+=3;

        if(!(str[i]=='W' && str[i+1] == 'U' && str[i+2]=='B'))
        {
            cout<<" ";
        }
    }
    
    return 0;
}
