#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j=1;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];	//Given a[i] gave a gift to i.
	
	for(i=0;i<n;)		//Print the one i gave a gift to.
	{	if(a[i]==j)
		{	cout<<i+1<<" ";
			j++;
			i=0;
		}
		else
		i++;
	}

	return 0;
}
