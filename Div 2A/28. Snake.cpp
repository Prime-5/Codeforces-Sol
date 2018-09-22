#include <bits/stdc++.h>
using namespace std;
	
int main()
{
	int n,m,i,j,flip=0;
	cin>>n>>m;
	char mat[n][m];
	
	for(i=0;i<n;i++)
	{	for(j=0;j<m;j++)
		{	mat[i][j]='.';
		}
	}

	for(i=0;i<n;i+=2)
	{	for(j=0;j<m;j++)
		{	mat[i][j]='#';
		}
		if(i+1<n)
		{	if(flip%2==0)
			{	mat[i+1][m-1]='#';
			}
			else
			{	mat[i+1][0]='#';
			}
			flip++;
		}
	}

	for(i=0;i<n;i++)
	{	for(j=0;j<m;j++)
		{	cout<<mat[i][j];
		}
		cout<<endl;
	}	



	return 0;
}


/*

For n=5, m=6,
######
.....#
######
#.....
######

*/
