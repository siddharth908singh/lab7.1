//including library
#include<iostream>
using namespace std;
//defining a function
int reverse(int q, int p)
{
	int x;
	x=p%10;
	q+=x;
	if (p/10==0)
	{
		return q;
	}
	else 
	{
		reverse (q , p/10);
	}
}
//defining a main function
int main()
{
	int n,r ;
	cout<< "input the number you want to reverse";
	cin >> n;
	r=reverse (0,n);
	cout <<" the sum of the digits of the number is "<< r;
	
}
		
 
