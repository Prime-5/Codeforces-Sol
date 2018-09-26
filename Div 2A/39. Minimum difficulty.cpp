#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
	{	cin>>a[i];
	}

	int d=0;
	for(i=0;i<n-1;i++)
	{	b[i]=a[i+1]-a[i];
		if(b[i] > d)
		{	d=b[i];
		}
	}

	//d is the difficulty of the current ladder.
	
	for(i=0;i<n-2;i++)
	{	b[i]=b[i]+b[i+1]; //Sum of consecutive differences. i.e. Difficulty if ith plank is removed
	}

	int min=b[0];
	for(i=0;i<n-2;i++)
	{	if(b[i]<d)		//New difficulty = d, if any consecutive difficulty < d
		{	cout<<d;
			return 0;
		}
		if(b[i]<min)		//If all consecutive difficulies > d, new diffuculty is the min. of all consecutive difficulties
			min=b[i];
	}
	cout<<min;

	return 0;
}
