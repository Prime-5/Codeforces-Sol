#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<n;i++)
	{	if(a[i]<0)
		{	cout<<"1 "<<a[i]<<endl;
			a[i]=10000;
			break;
		}
	}

	int flag=1;
	for(i=0;i<n;i++)
	{	if(a[i]>0 && a[i]!=10000)
		{	cout<<"1 "<<a[i]<<endl;
			a[i]=10000;
			flag--;
			break;
		}
	}

	int ele=0;
	if(flag==1)	//No positive element
	{	cout<<"2 ";
		for(i=0;ele<2;i++)
		{	if(a[i]!=10000 && a[i]<0)
			{	cout<<a[i]<<" ";
				a[i]=10000;
				ele++;
			}
		}
		cout<<endl;
	}

	cout<<n-2-flag<<" ";	//The size of remaining array
	for(i=0;i<n;i++)
	{	
		if(a[i]!=10000)
		{	cout<<a[i]<<" ";
		}
	}

	return 0;
}
