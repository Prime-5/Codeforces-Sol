#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,v,i,k,total=0,flag,j;
	cin>>n>>v;	
	int ans[n],x=0;		//Index of potential sellers; No. of potential sellers
	int a[51];

	for(i=0;i<n;i++)
	{
		flag=0;
		cin>>k;
		

		for(j=0;j<k;j++)
		{	cin>>a[i];
			if(a[i]<v)
				flag++;
		}
		if(flag!=0)
		{	ans[x++]=i+1;
			total++;
		}
	}		
	cout<<total<<endl;
	for(i=0;i<x;i++)
		cout<<ans[i]<<" ";


	return 0;
}
