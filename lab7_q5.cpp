//incklude library
#include<iostream>
using namespace std;
//defining a variable
int sumnateo(int x ,int y , int z)
{
	if(x>=y)	
	{	
	return z;
	}
	else	
	{
	z+=x;
	x+=2;
	sumnateo(x,y,z);
	}
}
//defining a main function
int main ()
{
	int x,y, sume, sumo;
	cout <<"what are the number between which u want to sum? "<<endl;
	cin>> x >>y;
	//printing sum of even
	if(x%2==0)
	{
		x+=2;
	}
	else
	{
		x+=1;
	}
	sume=sumnateo(x,y,0);
	cout << " sum of even numbers in the given range is -" <<sume<< endl; 
	//printing sum of odd
	if(x%2==1)
	{
		x+=2;
	}
	else
	{
		x+=-1;	
	}
	sumo=sumnateo(x,y,0);	
	cout << "sum of odd numbers in the given range is -" <<sumo<< endl; 
}


