#include <iostream>
using namespace std;

                          //Output the string with more frequency
int main()
{
	int i,n, count=0;
	string str, str2, in;
	cin>>n;
	cin>>str;
	count=1;
	for(i=1;i<n;i++)
	{
		cin>>in;
		if(in==str)
		{
			count++;
		}
		else
		{
			str2=in;
		}
	}
	
	if(count>n-count)
	{
		cout<<str;
	}
	else
	{
		cout<<str2;
	}
	
	return 0;
}
