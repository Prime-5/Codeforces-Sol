#include <bits/stdc++.h>
using namespace std;

int isr(int a)
{
	if(a>=-1000 && a<=1000)
		return 1;
	else
		return 0;
}

int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4,dis;
	cin>>x1>>y1>>x2>>y2;

	if(y2-y1==0)		//Points parallel to x-axis
	{
		dis=x2-x1;
		x3=x2;
		x4=x1;
		y3=y2+dis;
		y4=y1+dis;
	}
	else if(x2-x1==0)	//Points are parallel to y-axis
	{	
		dis=y2-y1;
		x3=x2+dis;
		x4=x1+dis;
		y3=y2;
		y4=y1;
	}
	else if(y2-y1==x2-x1 || y2-y1==x1-x2)	//Points are the diagonals of the square
	{
		dis=x2-x1;
		x3=x2;
		x4=x1;
		y3=y1;
		y4=y2;
	}
	else
	{
		cout<<"-1";
		return 0;
	}

	if(isr(x3) && isr(x4) && isr(y3) && isr(y4))
	{	cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	}
	else
	{
		cout<<"-1";
	}
		


	return 0;
}
