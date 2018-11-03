#include<bits/stdc++.h>
using namespace std;

int main()
{

		int n,m,i,j;
		cin>>n>>m;
		char a[n][m],ch;
		for(i=0;i<n;i++)
		{
			ch=getchar();
			for(j=0;j<m;j++)
			{
				ch=getchar();
				a[i][j]=ch;
			}
		}		
		
		for(i=0;i<n;i++)
		{
		    for(j=0;j<m;j++)
		    {
		        if(a[i][j]=='.')
		        {
		            if((i+j)%2==1)  a[i][j]='W';
		            else            a[i][j]='B';
		        }
		    }
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cout<<a[i][j];
			}
			cout<<endl;
		}
		
	return 0;
}
