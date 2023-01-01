#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int,int);
void printMaze();
void move1(int, int);
void moveup(int, int);

main()
{
	system("cls");
	int x=9,y=2,z=20;
	printMaze();
	while(true)
	{
		if(z==10)
		{
			z=20;
		}	
		if(z>10)
		{	
			move1(x,y);
			y=y+1;
			z=z-1;
		}
		if(y==12)
		{
		
			z=0;
		}
		if(z<10)
		{
			moveup(x,y);
			y=y-1;
			z=z+1;
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
	gotoxy(0,1);
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
	cout << "####################################               " << endl;

}

void move1(int x, int y)
{	
	gotoxy(x,y+1);
	cout << " ";
	if(y>2)
	{
		gotoxy(x,y-1);
		cout << " ";
	}
	gotoxy(x,y);
	cout << "P";
	Sleep(200);

}

void moveup(int x, int y)
{
	gotoxy(x,y-1);
	cout << " ";
	if(y<12)
	{
		gotoxy(x,y+1);
		cout << " ";
	}
	gotoxy(x,y);
	cout << "P";
	Sleep(200);

}
