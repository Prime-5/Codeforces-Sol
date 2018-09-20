#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;

	int an[6];
	an[0]=a*b+c;
	an[1]=a*(b+c);
	an[2]=a+b*c;
	an[3]=(a+b)*c;
	an[4]=a*b*c;
	an[5]=a+b+c;

	int max=an[0];
	for(int i=0;i<6;i++)
	{
		if(an[i]>max)
			max=an[i];
	}
	cout<<max;

	return 0;
}
