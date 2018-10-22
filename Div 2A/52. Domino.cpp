#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,up=0, down=0, level=0, sum1=0, sum2=0,a,b;
	cin>>n;
	for(i=0;i<n;i++)
	{	cin>>a>>b;
		sum1+=a;			//Sum of 1st half elements
		sum2+=b;			//Sum of 2nd half elements

		if(a%2==1 && b%2==0)		//1st odd, second even
			up++;
		else if(a%2==0 && b%2==1)	//1st even, second odd
			down++;
		else if(a%2==1 && b%2==1)	//Flipping odd-odd pair is of no use
			level++;
	}						

//	cout<<up<<" "<<down<<" "<<level<<endl;
	if(sum1%2==0 && sum2%2==0)					//Sums are een, no changes required 
		cout<<"0";
	else if(up!=0 || down!=0)					//Flip can be made only if either is non-zero
	{	if((up+level+1) % 2 == 0 && (down+level+1)%2==0)
			cout<<"1";					//The flip makes the no. of odd number on both sides an even number
		else
			cout<<"-1";					
	}
	else
		cout<<"-1";

	return 0;
}

//If the number of odd numbers on a side is an even number, then the sum is even.
//No. of even numbers can be odd or even - doesn't affects the evenness of final answer
