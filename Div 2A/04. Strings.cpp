#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	string str1, str2;
	cin>>str1>>str2;
	int l=str1.size(), i;
	for(i=0;i<l;i++)
	{	if(tolower(str1[i])>tolower(str2[i]))
		{	cout<<"1";
			return 0;
		}
		else if(tolower(str1[i])<tolower(str2[i]))
		{	cout<<"-1";
			return 0;
		}
	}
	cout<<"0";
	return 0;
			
}
