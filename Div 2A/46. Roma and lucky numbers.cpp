#include <bits/stdc++.h>
using namespace std;
	
int main()
{
	int n,k, temp, i, ans=0, digit, rem;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{	digit=0;
		cin>>temp;
		while(temp!=0)
		{	rem=temp%10;
			if(rem==4 || rem==7)
				digit++;
			temp=temp/10;
		}
		if(digit<=k)
			ans++;
	}

	cout<<ans;
		

	return 0;
}
