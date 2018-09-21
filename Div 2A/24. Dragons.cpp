#include <bits/stdc++.h>
using namespace std;

struct drag
{
	int a;
	int b;
};

int main()
{
	int s,n,i,j;
	cin>>s>>n;
		
	drag d[n], temp;
	for(i=0;i<n;i++)
	{
		cin>>d[i].a>>d[i].b;
	}

	for(i=0;i<n-1;i++)
	{	for(j=0;j<n-i-1;j++)
		{	if(d[j].a>d[j+1].a)
			{
				temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
			}
		}
	}
	
	i=0;
	while(i<n)
	{
		if(s>d[i].a)
		{	s+=d[i].b;
			i++;
		}
		else
		{	cout<<"NO";
			return 0;
		}
	}
	
	cout<<"YES";		

	return 0;
}
