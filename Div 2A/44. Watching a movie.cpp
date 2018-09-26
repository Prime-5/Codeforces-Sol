#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,i, sum=0, l, r, s=0;
	cin>>n>>x;
	
	for(i=0;i<n;i++)
	{	cin>>l>>r;
		sum+=((l-s-1)%x) + (r-l+1);
		s=r;
	}

	cout<<sum;

	return 0;
}
