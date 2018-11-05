#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,i,j,pos;
	cin>>k;
	char panel[4][4];
	static int count[10];			//Coz i know there are 10 distinct elements
	
	for(i=0;i<4;i++)
	{	getchar();
		for(j=0;j<4;j++)
		{
			panel[i][j]=getchar();
			if(panel[i][j]=='.')
			{
				pos=0;
			}
			else
			{
				pos=panel[i][j]-'0';
			}
			
			count[pos]++;
		}
	}
	
	for(i=1;i<10;i++)					//No need to consider '.'
	{
//		cout<<count[i]<<" ";
		if(count[i]>2*k)
		{
			cout<<"NO";
			return 0;
		}
	}
	
	cout<<"YES";
	return 0;
}
