#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int,int);
void printMaze();
void move(int, int);

main()
{

	system("cls");
	printMaze();
	move(9,5);
	gotoxy(0,15);

}

void gotoxy(int x,int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

void printMaze()
{

	cout << "####################################               " << endl;
	cout << "#                                  #" << endl;
	cout << "#                                  #" << endl;
	cout << "#                                  #" << endl;
	cout << "#                                  #" << endl;
	cout << "#                                  #" << endl;
	cout << "#                                  #" << endl;
	cout << "#                                  #" << endl;
	cout << "#                                  #" << endl;
	cout << "#                                  #" << endl;
	cout << "#                                  #" << endl;
	cout << "####################################               " << endl;

}

void move(int x, int y)
{
	gotoxy(x-1,y);
	cout << " ";
	gotoxy(x,y);
	cout << "P";
	Sleep(200);

}