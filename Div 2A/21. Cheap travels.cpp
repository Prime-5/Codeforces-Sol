#include <bits/stdc++.h>
using namespace std;

int main()
{
	float a,b;
	int n,m,i;
	cin>>n>>m>>a>>b;	//n->No. of rides; m->No. of rides covered in special ticket.
				//a->Cot of normal ticket; b->Cost of special ticket

	static float ar[3];
	ar[0] = n*a;			//All normal tickets
	ar[1] = (n/m)*b+(n%m)*a;	//n/m special + n%m normal tickets
	ar[2] = (n/m)*b+b;		//(n/m)+1 special tickets

	float ans=ar[0];
	for(i=1;i<3;i++)
		if(ar[i]<ans)
			ans=ar[i];
	
	cout<<(int)ans;

	return 0;
}
