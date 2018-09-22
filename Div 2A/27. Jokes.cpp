#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,d,i,sum=0;
	cin>>n>>d;
	int t[n];
	for(i=0;i<n;i++)
	{	cin>>t[i];
		sum+=t[i];
	}

	int devu=sum+(n-1)*10;

	if(devu > d)
	{	cout<<"-1";
		return 0;
	}

	int jokes = (n-1)*2 + (d-devu)/5;
	cout<<jokes;





	return 0;
}
