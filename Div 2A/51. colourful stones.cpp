#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,t;
	cin>>s>>t;
	
	int l=t.size();
	int m=s.size();

	int i=0, j=0;	//i for s, j for t(instruction)
	while(j<l && i<m)
	{	if(t[j]==s[i])
			i++;
		j++;
	}
	cout<<i+1;
	return 0;
}
