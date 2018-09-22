#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{	cin>>a[i];
	}

	int evenness;
	if(a[0]%2==a[1]%2 || a[0]%2==a[2]%2)
	{	evenness=a[0]%2;
	}
	else
	{	cout<<"1";
		return 0;
	}

	for(i=0;i<n;i++)
	{	if(a[i]%2!=evenness)
		{	cout<<i+1;
			return 0;
		}
	}

	return 0;
}
