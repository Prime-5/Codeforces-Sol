#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	int a[n], i, max=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(max<a[i])
			max=a[i];
	}
	
	int count[max+1];
	for(i=0;i<max+1;i++)        //Freq. of elements
		count[i]=0;
		
	for(i=0;i<n;i++)
		count[a[i]]++;
	
	int max_count=0;
	for(i=0;i<max+1;i++)        //Max freq.
	{
		if(max_count<count[i])
			max_count=count[i];
	}
	
	if(max_count<=(n+1)/2)
		cout<<"YES";
	else
		cout<<"NO";
	
	return 0;
}
