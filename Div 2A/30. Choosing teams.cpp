#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,i;
	cin>>n>>k;

	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];

	int sum=0;
	for(i=0;i<n;i++)
	{	if(a[i]<=5-k)
			sum++;
	}

	cout<<sum/3;

	return 0;
}
