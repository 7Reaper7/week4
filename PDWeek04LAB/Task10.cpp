#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int,int);
void discount(string, float);

main()
{
	
	system("cls");
	while(true)
	{
		string name;
		float price;
		cout << endl;
		cout << "Enter country name=> ";
		cin >> name;
		cout << "Enter ticket price=> ";
		cin >> price;
		discount(name,price);
	}
}

void gotoxy(int x,int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

void discount(string name, float price)
{

	if(name=="Pakistan")
	{
		price = price - (price*0.05);
		cout << "Your price after discount=> " << price;
	}
	if(name=="Ireland")
	{
		price = price - (price*0.1);
		cout << "Your price after discount=> " << price;
	}
	if(name=="India")
	{
		price = price - (price*0.2);
		cout << "Your price after discount=> " << price;
	}
	if(name=="England")
	{
		price = price - (price*0.3);
		cout << "Your price after discount=> " << price;
	}
	if(name=="Canada")
	{
		price = price - (price*0.45);
		cout << "Your price after discount=> " << price;
	}

}