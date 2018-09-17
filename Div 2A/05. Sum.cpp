#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	string str,ans;
	cin>>str;
	static int a[4];
	int m=0;
	for(int i=0;i<str.size();i++)
	{	if(str[i]!='+')
			a[str[i]-'0']++;	//Stores frequency
	}

	/*
	for(int k=0;k<4;k++)
		cout<<a[k]<<" ";
	cout<<endl;
	*/

	for(int j=1;j<4;j++)
	{	while(a[j]!=0)
		{	str[m++]=j+'0';
			m++;
			a[j]--;
		}
	}

	cout<<str;

	return 0;
}
