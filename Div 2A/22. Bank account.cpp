#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,rem;
	cin>>n;

	if(n>=0)
	{	cout<<n;
	}
	else
	{	
		a=n/10;
		
		rem=n%10;	//Last digit
		b=n/100;
		b=b*10 + rem;

		if(a>b)
			cout<<a;
		else
			cout<<b;

	}

	return 0;
}
