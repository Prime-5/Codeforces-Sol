#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,i,f,t;
	cin>>n>>k;
	int a[n];

	for(i=0;i<n;i++)
	{	cin>>f>>t;
		a[i] = (t>k) ? f-(t-k) : f;
	}

	int max=a[0];
	for(i=0;i<n;i++)
	{	if(a[i]>max)
			max=a[i];
	}

	cout<<max;


	return 0;
}
