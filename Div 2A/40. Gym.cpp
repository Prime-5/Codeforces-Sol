#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,x;
	cin>>n;
	int c=0, bi=0, ba=0;

	for(i=0;i<n;i++)
	{	cin>>x;
		if(i%3==0)
			c+=x;
		else if(i%3==1)
			bi+=x;
		else
			ba+=x;
	}

	if(c>bi && c>ba)
		cout<<"chest";
	else if(bi>c && bi>ba)
		cout<<"biceps";
	else
		cout<<"back";


	return 0;
}
