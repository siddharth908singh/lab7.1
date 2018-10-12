//including library
#include<iostream>
using namespace std;
//declaring the function
int natnum(int x, int y)
{
	//condition to break the recursion
	if (x>y)
	{
	return 1;
	}
	else
	{
	cout <<x<< endl;
	x++;
	//recursion of function
	natnum(x,y);
	}
}
//declaring the main function
int main ()
{
	int a;
	//asking the user for input
	cout <<"what is the number till where u want numbers to print? "<<endl;
	cin>> a;
	// calling the required function 
	natnum(1 ,a);
}
