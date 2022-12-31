#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int,int);
void Reverse(string);

main()
{
	
	system("cls");
	string input;
	cout << "Enter true or false=> ";
	cin >> input;
	Reverse(input);
	
}

void gotoxy(int x,int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

void Reverse(string name)
{

	if(name=="true")
	{
		cout << "false";
	}
	if(name=="false")
	{
		cout << "true";
	}

}