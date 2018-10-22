#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	cin>>a[0];
	int g=a[0];
	for(i=1;i<n;i++)		//gcd of n elements of array
	{	cin>>a[i];
		g=__gcd(g,a[i]);
	}
	cout<<n*g;
	return 0;
}
