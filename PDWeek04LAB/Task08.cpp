#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int,int);
void isEqual(int,int);

main()
{
	
	system("cls");
	int num1, num2;
	cout << "Enter an integer=> ";
	cin >> num1;
	cout << "Enter another integer=> ";
	cin >> num2;
	isEqual(num1,num2);

}

void gotoxy(int x,int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

void isEqual(int num1,int num2)
{

	if(num1==num2)
	{
		cout << "true";
	}
	if(num1<num2)
	{
		cout << "false";
	}
	if(num1>num2)
	{
		cout << "false";
	}

}