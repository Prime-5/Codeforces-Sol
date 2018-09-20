#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,k,i;
	cin>>n>>k;
	if(k<=(n+1)/2)
		cout<<2*k-1;
	else
	{	k-=(n+1)/2;
		cout<<2*k;
	}

	return 0;
}
