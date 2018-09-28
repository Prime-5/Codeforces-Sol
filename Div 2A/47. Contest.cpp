#include <bits/stdc++.h>
using namespace std;


int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int m = max(3*a/10, a-((a/250)*c));
	int v = max(3*b/10, b-((b/250)*d));

	if(m>v)
		cout<<"Misha";
	else if(m<v)
		cout<<"Vasya";
	else
		cout<<"Tie";
	
	return 0;
}
