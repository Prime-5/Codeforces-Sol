#include <bits/stdc++.h>
using namespace std;

int Min(int a, int b)
{	if(a<b)
		return a;
	else
		return b;
}

int main()
{
	int n,i;
	cin>>n;
	int a[n], ar1[n], ar2[n], ar3[n];
	int x=0, y=0, z=0;

	for(i=0;i<n;i++)
	{	cin>>a[i];
	}

	for(i=0;i<n;i++)
	{			
		if(a[i]==1)
		{	ar1[x++]=i+1;			//Storing indexes where 1 is there; Adjusting indexing		
		}
		else if(a[i]==2)
		{	ar2[y++]=i+1;
		}
		else
		{	ar3[z++]=i+1;
		}	
	}

	int size=Min(x, Min(y, z));
	

	cout<<size<<endl;
	for(i=0;i<size;i++)
	{	cout<<ar1[i]<<" "<<ar2[i]<<" "<<ar3[i]<<endl;	
	}

	return 0;
}
