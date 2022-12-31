#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int,int);
void printMaze();
void move(int, int);

main()
{
	system("cls");
	int x=9,y=1;
	printMaze();
	while(true)
	{
		if(y<14)
		{
			move(x,y);
			y=y+1;
		}
		if(y==14)
		{
			gotoxy(9,13);
			cout << " ";	
			y=1;
		}
		
	}
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
	cout << "#                                  #" << endl;
	cout << "#                                  #" << endl;
	cout << "#                                  #" << endl;
	cout << "####################################               " << endl;

}

void move(int x, int y)
{	

	
	if(y>1)
	{
		gotoxy(x,y-1);
		cout << " ";
	}
	gotoxy(x,y);
	cout << "P";
	Sleep(200);

}