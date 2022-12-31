#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int,int);
void BigAlphabetMY();

main()
{
	
	system("cls");
	BigAlphabetMY();

}

void gotoxy(int x,int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

void BigAlphabetMY()
{

	gotoxy(50,11);	
	cout << "       ##         ######       ######  ##########    ######   ##        ##  " << endl;
	gotoxy(50,12);
	cout << "      ## ##         ## ##        ##        ##	     ##         ##        ##" << endl;
	gotoxy(50,13);
	cout << "     ##   ##        ##  ##       ##        ##	    ##          ##        ##" << endl;
	gotoxy(50,14);
	cout << "    ##     ##       ##   ##      ##        ##       ##        ##        ##" << endl;
	gotoxy(50,15);
	cout << "   ##       ##      ##    ##     ##        ##         ## 	##        ##" << endl;
	gotoxy(50,16);	
	cout << "   ###########      ##     ##    ##        ##	         ##     ############  " << endl;
	gotoxy(50,17);
	cout << "   ##       ##      ##      ##   ##        ##	           ##   ##        ##" << endl;
	gotoxy(50,18);
	cout << "   ##       ##      ##       ##  ##        ##	            ##  ##        ##" << endl;
	gotoxy(50,18);
	cout << "  ###       ###     ##        ## ##        ##	           ##   ##        ##" << endl;
	gotoxy(50,19);
	cout << " ####       ####  ######       ######  ##########   ######    ##        ##" << endl;

}