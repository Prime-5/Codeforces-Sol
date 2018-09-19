#include <bits/stdc++.h>
using namespace std;

int main()
{	
	int n,m,i;
	cin>>n>>m;
	int a[m];
	for(i=0;i<m;i++)
	{	cin>>a[i];
	}

	sort(a,a+m);

/*	for(i=0;i<m;i++)
	{	cout<<a[i]<<" ";
	}
	cout<<endl;
*/
	int min=a[n-1]-a[0];
	for(i=1;n+i-1<m;i++)
	{	if((a[n+i-1]-a[i] < min))
			min=a[n+i-1]-a[i];
	}
	cout<<min;

	return 0;
}
