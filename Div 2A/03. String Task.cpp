#include <iostream>
#include <string>
using namespace std;

bool isvowel(char ch)
{
	ch=toupper(ch);
	return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='Y');
}

int main()
{
	string str,s;
	char ch;
	cin>>str;
	int l=str.size(),i;
	for(i=0;i<l;i++)
	{	ch=str[i];
		if(!isvowel(ch))
		{	ch=tolower(ch);
			s+=".";
			s+=ch;
		}
	}
	cout<<s;
	return 0;
}
		
