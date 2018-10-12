//include library
#include<iostream>
using namespace std;
//declaring the function
int eonum(int x , int y)
{
	if (x>y)
	{
	return 1;
	}
	else
	{
	cout <<x<< endl;
	x+=2;
	eonum(x,y);
	}
}
//declaring the main function
int main ()
{
	int x ,y;
	cout <<"what are the number between which u want numbers to print? "<<endl;
	cin>> x>>y;
	if(x%2==0)
	{
	x=x;
	}
	else
	{
	x+=1;
	}
	cout << "even numbers in the given range are -" << endl; 
	eonum(x ,y);

	if(x%2==0)
	{
	x+=1;
	}
	else
	{
	x=x;
	}
	cout << "odd numbers in the given range are -" << endl; 
	eonum(x,y);		

}

