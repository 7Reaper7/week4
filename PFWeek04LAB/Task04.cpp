#include<iostream>
using namespace std;

void calculateBill(string day, int amount);
main()
{

	string name;
	int total;
	cout << "Enter the day of purchase=> ";
	cin >> name;
	cout << "Enter the total purchase amount=> ";
	cin >> total;
	calculateBill(name,total);
}

void calculateBill(string day, int amount)
{
	float percent=amount;
	if(day=="sunday")
	{
		percent = percent-(amount*0.1);
	}
	cout << "you payable amount it=> " << percent;
}