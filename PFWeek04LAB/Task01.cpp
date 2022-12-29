#include<iostream>
using namespace std;

void add(int num1, int num2);
void mul(int num1, int num2);
void subtract(int num1, int num2);
void divide(int num1, int num2);

main()
{

	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	char operation;
	while(true)
	{
		cout << "Chose what you want to do + or - or * or /";
		cin >> operation;	
	
		if(operation=='+')
		{
			cout << "Enter a number=> ";
			cin >> num1;
			cout << "Enter another number=> ";
			cin >> num2;
				add(num1,num2);
		}
		if(operation=='*')
		{
			cout << "Enter a number for multiplication=> ";
			cin >> num3;
			cout << "Enter another number for multiplication=> ";
			cin >> num4;
				mul(num3,num4);
		}
		if(operation=='-')
		{
			cout << "Enter a number for subtraction=> ";
			cin >> num5;
			cout << "Enter another number for subtraction=> ";
			cin >> num6;
				subtract(num5,num6);
		}
		if(operation=='/')
		{
			cout << "Enter a number for division=> ";
			cin >> num7;
			cout << "Enter another number for division=> ";
			cin >> num8;
				divide(num7,num8);
		}
	}
}

void add(int num1, int num2)
{

	int sum;
		sum=num1+num2;
	cout << "Your sum is=> " << sum << endl;

}

void mul(int num1, int num2)
{

	int product;
		product = num1*num2;
	cout << "product=> " << product << endl;

}

void subtract(int num1, int num2)
{

	int diff;
		diff = num1-num2;
	cout << "difference is=> " << diff << endl;

}

void divide(int num1, int num2)
{

	int div;
		div=num1/num2;
	cout << "Your fraction is=> " << div << endl;

}