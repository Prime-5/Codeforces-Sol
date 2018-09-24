#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,flag=0,a,b;
	cin>>n;
	vector <pair <int,int> > Yo;

	int q=0;
	for(i=0;i<n;i++)
	{	cin>>a>>b;
		Yo.push_back(make_pair(a,b) );
	}

	sort(Yo.begin(), Yo.end());

	for(i=0;i<n-1;i++)
	{	if(Yo[i].second>Yo[i+1].second)
		{	flag++;
			break;
		}
	}

	if(flag!=0)
		cout<<"Happy Alex";
	else
		cout<<"Poor Alex";
		
	return 0;
}
