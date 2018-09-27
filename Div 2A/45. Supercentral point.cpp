#include <bits/stdc++.h>
using namespace std;

char a[2001][2001];
int ans=0;

int istop(int x, int y)
{
	x--;
	while(x>=0)
	{	if(a[x][y]==1)
			return 1;
		else
			x--;
	}
	return 0;
}

int isdown(int x, int y)
{
	x++;
	while(x<2001)
	{	if(a[x][y]==1)
			return 1;
		else
			x++;
	}
	return 0;
}

int isleft(int x, int y)
{
	y--;
	while(y>=0)
	{	if(a[x][y]==1)
			return 1;
		else
			y--;
	}
	return 0;
}

int isright(int x, int y)
{
	y++;
	while(y<2001)
	{	if(a[x][y]==1)
			return 1;
		else
			y++;
	}
	return 0;
}

int main()
{
	int n,i,j,l=0,x,y;
	cin>>n;

	for(i=0;i<n;i++)
	{	cin>>x>>y;
		x+=1000;
		y+=1000;
		a[x][y]=1;
	}

	for(i=0;i<2001 && l<n;i++)
	{	for(j=0;j<2001;j++)	
		{	if(a[i][j]==1)
			{	if(istop(i,j) && isdown(i,j) && isleft(i,j) && isright(i,j))
					ans++;
				l++;
			}
		}
	}

	cout<<ans;

	return 0;
}
