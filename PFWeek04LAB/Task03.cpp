#include<iostream>
using namespace std;

void isEven(int num);
main()
{
	while(true)
	{
		int num;
		cout << "Enter a number=> ";
		cin >> num;
		isEven(num);
	}
}
void isEven(int num)
{
	
	if(num % 2 == 0)
	{
		cout << "its an even number." << endl;
	}
	if(num % 2 == 1)
	{
		cout << "its an odd number." << endl;
	}
}