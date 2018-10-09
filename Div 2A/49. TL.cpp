#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,v, max=0, flag=0, i, mininc=100;
	cin>>n>>m;
	int cor[n], incor[m];

	for(i=0;i<n;i++)
	{	cin>>cor[i];
		if(max<cor[i])
			max=cor[i];
	}

	for(i=0;i<m;i++)
	{	cin>>incor[i];
		if(max>=incor[i])
			flag++;
		if(incor[i]<mininc)
			mininc=incor[i];
	}

	if(flag!=0)			//Checking at all correct are smaller than any incorrect
	{	cout<<"-1";
		return 0;
	}


	sort(cor, cor+n);
	
	int x=cor[0];
	x=2*x;
	if(x<=cor[n-1])
		cout<<cor[n-1];
	else if(x<mininc)
		cout<<x;
	else
		cout<<"-1";

	return 0;
}

