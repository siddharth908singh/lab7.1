#include<iostream>
using namespace std;
//declaring the function
int pow(int x,int y)
{
	int a=y;
	//recursion of power function
	if (a!=0)
	{
		return x*pow(x,y-1);
	}
	else 
	{
	// condition to break the recursion loop 
	 return 1;
	}
}
//defining the main function	
int main ()
{
	int a ,b, c;
	//asking the user for input
	cout << "what is the base number ? ";
	cin>>a;
	cout << "what is the power ? ";
	cin>> b;
	//assigning the value of function to a variable
	c= pow(a,b);
	//output
	cout << "required number is " << c<<endl;
}
