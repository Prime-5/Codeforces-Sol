#include <iostream>
using namespace std;


void remove_zero(string &a)
{	
	int i=0;
	while(a[i]!='\0')			//Remove all 0s from str1
	{
		if(a[i]=='0')
		{
			a.erase(i,1);
		}
		else
			i++;
	}
}


int main() 
{
	long long a,b,c;
	cin>>a>>b;
	c=a+b;
	
	string str1=to_string(a), str2=to_string(b);				//Integer to string
	string str3=to_string(c);
	
//	cout<<str1<<endl<<str2<<endl<<str3<<endl;
	
	
	remove_zero(str1);											//Remove Zeros from string
	remove_zero(str2);
	remove_zero(str3);

	
//	cout<<str1<<endl<<str2<<endl<<str3<<endl;
	
	int new_a=0, new_b=0, new_c=0;								//Converting string to integer
	new_a=stoi(str1);
	new_b=stoi(str2);
	new_c=stoi(str3);
	
	if(new_a + new_b == new_c)
		cout<<"YES";
	else
		cout<<"NO";
		
	return 0;
}
