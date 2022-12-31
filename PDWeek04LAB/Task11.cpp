#include<iostream>
#include<windows.h>
using namespace std;

void limit(int);

main()
{
	
	system("cls");
	int speed;
	cout << "Enter speed of car in km/h=> ";
	cin >> speed;
	limit(speed);
}

void limit(int speed)
{

	if(speed>100)
	{
		cout << "for the love of God slow down.";
	}
	if(speed<=100)
	{
		cout << "sighs... move on.";
	}

}