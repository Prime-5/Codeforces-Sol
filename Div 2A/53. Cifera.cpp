#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a,b;
	cin>>a>>b;
	long long temp=a;
	for(long long i=0;i<=sqrt(b);i++)
	{	
		if(temp==b)
		{	cout<<"YES"<<endl<<i;		//Computer log b to base a - 1.
			return 0;
		}
		temp*=a;
		
	}

	cout<<"NO";
	
	return 0;
}
