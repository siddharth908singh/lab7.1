//include library
#include<iostream>
using namespace std;
//defining a function
int sumnat(int x ,int y , int z)
{
	if(x>y)	
	{	
	return z;
	}
	else	
	{
	z+=x;
	x++;
	sumnat(x,y,z);
	}
	
}
//defining the main function
int main()
{
	int x ,y;
	cout <<"what is the number till you want to sum ?"<<endl;
	cin >> x;
	y =sumnat(1,x,0);
	cout << y<<endl;
} 
