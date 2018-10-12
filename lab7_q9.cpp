//including library
 #include<iostream>
using namespace std;
//defing a function
int factorial(int x)
{
	int factor,y=x;
	if (y==0)
	{
		return 1;
	}
	else 
	{
	 return x*factorial(y-1);
	}
}
//defing a main function	
int main ()
{
	int a ,b;
	cout << "what is the number u want to calculate factorial for ";
	cin>>a;
	b= factorial(a);
	cout << "factorial of the number is " << b;
}
