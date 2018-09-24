#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,c,i;
	cin>>n>>c;
	int a[n];
	int b[n-1];

	cin>>a[0];
	for(i=1;i<n;i++)
	{	cin>>a[i];
		b[i-1]=a[i-1]-a[i]-c;
	}
		
	int max=b[0];
	for(i=0;i<n-1;i++)
	{	if(b[i]>max)
			max=b[i];
	}

	if(max<0)
		cout<<"0";
	else
		cout<<max;

	return 0;
}
