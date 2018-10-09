#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,j,max, ans=0;
	char ch;
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<n;i++)
	{	getchar();
		for(j=0;j<m;j++)
		{	ch=getchar();
			a[i][j]=ch-'0';
		}
	}

/*
//Printing input
	for(i=0;i<n;i++)
	{	for(j=0;j<m;j++)
		{	cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
*/

	for(j=0;j<m;j++)
	{	max=0;
		for(i=0;i<n;i++)			//Comparing subject wise
		{	if(a[i][j]>max)
				max=a[i][j];
		}
		for(i=0;i<n;i++)			//Keeping the highest score
		{	if(a[i][j]==max)
				a[i][j]=1;
			else
				a[i][j]=0;
		}
	}

/*
//Printing high-score matrix
	for(i=0;i<n;i++)
	{	for(j=0;j<m;j++)
		{	cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
*/

	for(i=0;i<n;i++)				//Checking no. of students who got highest score in atleast one subject
	{	for(j=0;j<m;j++)
		{	if(a[i][j]==1)
			{	ans++;
				break;
			}
		}
	}

	cout<<ans;
		
	return 0;
}
