#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int,int);
void BigAlphabetA();
void BigAlphabetW();
void BigAlphabetA1();
void BigAlphabetI();
void BigAlphabetS();

main()
{
	
	system("cls");
	BigAlphabetA();
	BigAlphabetW();
	BigAlphabetA1();
	BigAlphabetI();
	BigAlphabetS();

}

void gotoxy(int x,int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

void BigAlphabetA()
{

	gotoxy(50,11);	
	cout << "      ##  " << endl;
	gotoxy(50,12);
	cout << "     ## ##  " << endl;
	gotoxy(50,13);
	cout << "    ##   ##  " << endl;
	gotoxy(50,14);
	cout << "   ##     ##  " << endl;
	gotoxy(50,15);
	cout << "  ##       ##  " << endl;
	gotoxy(50,16);	
	cout << "  ###########  " << endl;
	gotoxy(50,17);
	cout << "  ##       ##  " << endl;
	gotoxy(50,18);
	cout << "  ##       ##  " << endl;
	gotoxy(50,19);
	cout << " ###       ###  " << endl;
	gotoxy(50,20);
	cout << "####       ####  " << endl;

}

void BigAlphabetW()
{

	gotoxy(65,11);	
	cout << "######    ######   ######  " << endl;
	gotoxy(65,12);
	cout << "  ##       ####      ##  " << endl;
	gotoxy(65,13);
	cout << "  ##       ####      ##  " << endl;
	gotoxy(65,14);
	cout << "  ##       ####      ##  " << endl;
	gotoxy(65,15);
	cout << "  ##       ####      ##  " << endl;
	gotoxy(65,16);	
	cout << "  ##       ####      ##  " << endl;
	gotoxy(65,17);
	cout << "   ##     ##  ##     ##  " << endl;
	gotoxy(65,18);
	cout << "    ##   ##    ##   ##  " << endl;
	gotoxy(65,19);
	cout << "     ## ##      ## ##  " << endl;
	gotoxy(65,20);
	cout << "      ##         ##  " << endl;

}

void BigAlphabetA1()
{

	gotoxy(91,11);	
	cout << "      ##  " << endl;
	gotoxy(91,12);
	cout << "     ## ##  " << endl;
	gotoxy(91,13);
	cout << "    ##   ##  " << endl;
	gotoxy(91,14);
	cout << "   ##     ##  " << endl;
	gotoxy(91,15);
	cout << "  ##       ##  " << endl;
	gotoxy(91,16);	
	cout << "  ###########  " << endl;
	gotoxy(91,17);
	cout << "  ##       ##  " << endl;
	gotoxy(91,18);
	cout << "  ##       ##  " << endl;
	gotoxy(91,19);
	cout << " ###       ###  " << endl;
	gotoxy(91,20);
	cout << "####       ####  " << endl;

}

void BigAlphabetI()
{

	gotoxy(107,11);	
	cout << "##########  " << endl;
	gotoxy(107,12);
	cout << "    ##" << endl;
	gotoxy(107,13);
	cout << "    ##" << endl;
	gotoxy(107,14);
	cout << "    ##" << endl;
	gotoxy(107,15);
	cout << "    ##" << endl;
	gotoxy(107,16);	
	cout << "    ##" << endl;
	gotoxy(107,17);
	cout << "    ##" << endl;
	gotoxy(107,18);
	cout << "    ##" << endl;
	gotoxy(107,19);
	cout << "    ##" << endl;
	gotoxy(107,20);
	cout << "##########  " << endl;

}

void BigAlphabetS()
{

	gotoxy(117,11);	
	cout << "   #######  " << endl;
	gotoxy(117,12);
	cout << " ##  " << endl;
	gotoxy(117,13);
	cout << " ##  " << endl;
	gotoxy(117,14);
	cout << "  ##  " << endl;
	gotoxy(117,15);
	cout << "    ##  " << endl;
	gotoxy(117,16);	
	cout << "      ##  " << endl;
	gotoxy(117,17);
	cout << "        ##  " << endl;
	gotoxy(117,18);
	cout << "         ##  " << endl;
	gotoxy(117,19);
	cout << "        ##  " << endl;
	gotoxy(117,20);
	cout << " #######  " << endl;

}