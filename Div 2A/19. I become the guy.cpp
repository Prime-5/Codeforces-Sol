#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,p,q,flag=0,i;
	cin>>n;		//Total n. of levels
	cin>>p;		//Levels 'X' can pass
	int x[p];
	for(i=0;i<p;i++)
		cin>>x[i];
	
	cin>>q;		//Levels 'Y' can pass
	int y[q];
	for(i=0;i<q;i++)
		cin>>y[i];

	int a[n+1];	//Cumulative
	for(i=0;i<=n;i++)
		a[i]=0;
	
	for(i=0;i<p;i++)	//Marking the levels either would pass as 1.
		a[x[i]]=1;
	for(i=0;i<q;i++)
		a[y[i]]=1;

	for(i=1;i<=n;i++)
	{	if(a[i]==0)
		{	cout<<"Oh, my keyboard!";
			flag++;
			break;
		}
	}

	if(flag==0)
		cout<<"I become the guy.";
	

	return 0;
}
