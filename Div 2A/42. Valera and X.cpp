#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	char mat[n][n];

	for(i=0;i<n;i++)
	{	for(j=0;j<n;j++)
		{	cin>>mat[i][j];
		}
	}

	char d=mat[0][0];
	char nd=mat[0][1];
	
	if(d==nd)
	{	cout<<"NO";
		return 0;
	}

	for(i=0;i<n;i++)
	{	for(j=0;j<n;j++)
		{	if(i==j || i+j==n-1)	//Diagonal elements
			{	if(mat[i][j]!=d)
				{	cout<<"NO";
					return 0;
				}
			}
			else			//Non-diagonal elements
			{	if(mat[i][j]!=nd)
				{	cout<<"NO";
					return 0;
				}
			}
		}
	}

	cout<<"YES";
	return 0;
}
