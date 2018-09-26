#include <bits/stdc++.h>
using namespace std;

int coprime(unsigned long long int a, unsigned long long int b)
{
	unsigned long long int t;
	while(a!=0)
	{	t=a;
		a=b%t;
		b=t;
	}

	if(b==1)
		return 1;
	else
		return 0;
}

int main()
{
	unsigned long long int l,r,i,j,k;
	cin>>l>>r;

	for(i=l;i<=r;i++)
	{	for(j=i+1;j<=r;j++)
		{	if(coprime(i,j))
			{	for(k=j+1;k<=r;k++)
				{	if(coprime(j,k) && (!coprime(i,k)))
					{	cout<<i<<" "<<j<<" "<<k;
						return 0;
					}
				}
			}
		}
	}

	cout<<"-1";
	return 0;
}

// Find i,j,k in range [l,r] such that (i,j) and (j,k) are coprimes, but (i,k) are not.
