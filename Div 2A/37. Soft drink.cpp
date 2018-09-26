#include <bits/stdc++.h>
using namespace std;

int min(int a, int b)
{	if(a<b)
		return a;
	else
		return b;
}

int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int drink = (k*l)/nl;
	int limes = c*d;
	int salt = p/np;
	int ans=min(drink, min(limes, salt));

	cout<<ans/n;
	return 0;
}
