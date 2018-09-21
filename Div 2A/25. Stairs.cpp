#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i;
	cin>>n>>m;
	int l=(n+1)/2;		//l-u are the possible no. of moves.
	int u=n;

	for(i=l;i<=u;i++)
	{	if(i%m==0)
		{	cout<<i;
			return 0;
		}
	}
	cout<<"-1";

	return 0;
}
