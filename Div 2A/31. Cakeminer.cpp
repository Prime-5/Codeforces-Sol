#include <bits/stdc++.h>
using namespace std;

int main()
{
	int r,c,i,j,ans=0,flag,rows=0;
	cin>>r>>c;
	char cake[r][c];

	for(i=0;i<r;i++)
	{	flag=0;
		for(j=0;j<c;j++)
		{	cin>>cake[i][j];
			if(cake[i][j]=='S')
				flag++;	
		}
		if(flag==0)
		{	ans+=c;				//Checking row wise whie taking input
			rows++;
		}
	}

	for(i=0;i<c;i++)
	{	flag=0;
		for(j=0;j<r;j++)
		{	if(cake[j][i]=='S')
				flag++;
		}
		if(flag==0)
			ans+=r-rows;				//Checking column wise; Subtracting common ones
	}

	cout<<ans;
	return 0;
}
