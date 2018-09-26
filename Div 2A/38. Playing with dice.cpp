#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	int x=0, y=0, z=0, i,j;

	cin>>a>>b;

	for(i=0;i<6;i++)
	{	
		j=i+1;
		if(abs(a-j) > abs(b-j))
			z++;
		else if(abs(a-j) < abs(b-j))
			x++;
		else
			y++;	
	}

	cout<<x<<" "<<y<<" "<<z;
	


	return 0;
}
