#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n)
	{
		string str;
		cin>>str;
		if(str.size()>10)
		{	int l=str.size();
			cout<<str[0]<<l-2<<str[l-1];
		}
		else
			cout<<str;
		cout<<endl;

		n--;
	}
	return 0;
}
