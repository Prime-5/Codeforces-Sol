#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,p,q;
	cin>>n;
	char a[n+2][n+2];	//So as to not keep checking boundary conditions.
	int b[n+2][n+2];

	for(i=0;i<n+2;i++)
		for(j=0;j<n+2;j++)
			a[i][j]='x';

	for(p=0;p<n+2;p++)
		for(q=0;q<n+2;q++)
			b[p][q]=0;

	for(i=1;i<=n;i++)
	{	for(j=1;j<=n;j++)
		{	cin>>a[i][j];
		}
	}

	for(i=1;i<n+1;i++)
	{	for(j=0;j<n+1;j++)
		{	if(a[i][j+1]=='o')
				b[i][j]++;
			if(a[i+1][j]=='o')
				b[i][j]++;
			if(a[i-1][j]=='o')
				b[i][j]++;
			if(a[i][j-1]=='o')
				b[i][j]++;
		}
	}

	for(i=1;i<n+1;i++)
	{	for(j=1;j<n+1;j++)
		{	if(b[i][j]%2==1)
			{	cout<<"NO";
				return 0;
			}
		}
	}

	cout<<"YES";
	return 0;

}
