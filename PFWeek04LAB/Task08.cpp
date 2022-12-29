#include<iostream>
using namespace std;

void compare(int,int);

main()
{

	int num1;
	int num2;
	cout << "Enter first number=> ";
	cin >> num1;
	cout << "Enter second number=> ";
	cin >> num2;
	compare(num1,num2);

}

void compare(int number1,int number2)
{

	if(number1<number2)
	{
		cout << number2 << " is greater than " << number1;
	}
	if(number2<number1)
	{
		cout << number1 << " is greater than " << number2;
	}
	if(number1==number2)
	{
		cout << "Both numbers are equal.";
	}
}