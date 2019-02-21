#include<iostream>
#include<math.h> 
using namespace std;
class CALC
{
	public:
		int a, b, sum, diff, multiply, divide;

	void sum()
	{
		sum = a + b;
	}
	void diff()
	{
		diff = a - b;
	}
	void multiply()
	{
		multiply = a * b;
	}
	void divide()
	{
		divide = a / b;
	}

	void display()
	{
		cout<<"enter two values"<<endl;
		cin>>a,b;
	}


