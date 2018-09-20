#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	char ch='A';
	int i=0;
	while(ch!='}')
	{
		cin>>ch;
		
		if(ch>=97 && ch<=122)
		{	
			str+=ch;		//Prefer this over str[i++]=ch or str.append()
		}
	}

	static int count[26];
	int dis=0;				//Distinct characters
	for(i=0;i<str.size();i++)
	{	count[str[i]-'a']=1;
	}

	for(i=0;i<26;i++)
	{
		if(count[i]==1)
			dis++;
	}

	cout<<dis;



	return 0;
}
