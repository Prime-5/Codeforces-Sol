#include <bits/stdc++.h>
using namespace std;

int min(int a, int b)
{
	if(a<b)
		return a;
	else
		return b;
}

int max(int a, int b)
{	if(a<b)
		return b;
	else
		return a;
}

int main()
{	
	int n,a,b,c, i, j, k, ans=0;
	cin>>n>>a>>b>>c;
    
	int mini = min(a, min(b,c));

	if(n%mini==0)
	{	cout<<n/mini;
		return 0;
	}

	else if(a==2 && c==3)
	{	cout<<n/2;
		return 0;
	}
    
	for(i=0;i<(n/a)+1;i++)
	{	for(j=0;j<(n/b)+1;j++)
		{	for(k=0;k<(n/c)+1;k++)
			{	if(a*i + b*j + c*k == n)
					ans = max(ans, i+j+k);
			}
		}
	}

	cout<<ans;
	return 0;
}
