#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int,int);
void header();
void printMenu();
void calAggregate(string,float,float,float);
void compareMarks(string,string,int,int);

main()
{
	string namestd1,namestd2;
	int matric1,intermediate1,ecat1;
	int matric2,intermediate2,ecat2;
	int choice;
	char null;
	
	while(true)
	{
		printMenu();
		gotoxy(0,15);
		cout << "Enter choice=> ";
		cin >> choice;
		
		if(choice==1)
		{
			system("cls");
	
			cout << "Your choice=> 1" << endl;
			cout << "Enter Your Name=> ";
			cin >> namestd1;
			cout << "Enter Your Matric Marks=> ";
			cin >> matric1;
			cout << "Enter Your Inter Marks=> "; 
			cin >> intermediate1;
			cout << "Enter Your ECAT Marks=> ";
			cin >> ecat1;
			cout << "Enter any key to continue...";
			cin >> null;

		}
		if(choice==2)
		{
			system("cls");
	
			cout << "Your choice=> 2" << endl;
			cout << "Enter Your Name=> ";
			cin >> namestd2;
			cout << "Enter Your Matric Marks=> ";
			cin >> matric2;
			cout << "Enter Your Inter Marks=> "; 
			cin >> intermediate2;
			cout << "Enter Your ECAT Marks=> ";
			cin >> ecat2;
			cout << "Enter any key to continue...";
			cin >> null;	
		}
		if(choice==3)
		{
			cout << "Your choice=> 3" << endl;
			calAggregate(namestd1,matric1,intermediate1,ecat1);
			cout << "Enter any key to continue...";
			cin >> null;
		}
		if(choice==4)
		{
			cout << "Your choice=> 4" << endl;
			calAggregate(namestd2,matric2,intermediate2,ecat2);
			cout << "Enter any key to continue...";
			cin >> null;	
		}
		if(choice==5)
		{
			compareMarks(namestd1,namestd2,ecat1,ecat2);
			cout << "Enter any key to continue...";
			cin >> null;	
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

void header()
{

	cout << "#####################################"	<< endl;
	cout << "**                                 **" << endl;
	cout << "**                                 **" << endl;
	cout << "**           UET LAHORE            **" << endl;
	cout << "**                                 **" << endl;
	cout << "**                                 **" << endl;
	cout << "#####################################" << endl;
}

void printMenu()
{
		system("cls");
		
		header();
		gotoxy(0,10);
		cout << "Press 1 to enter details of first student" << endl;
		gotoxy(0,11);
		cout << "Press 2 to enter details of second student" << endl;
		gotoxy(0,12);
		cout << "Press 3 to calculate aggregate of first student" << endl;
		gotoxy(0,13);
		cout << "Press 4 to calculate aggregate of second student" << endl;
		gotoxy(0,14);	
		cout << "Press 5 to determine Roll No.1=> " << endl;
		

}

void calAggregate(string name, float matric, float intermediate, float ecat)
{
	system("cls");
	float matric_percent, inter_percent, ecat_percent;
	float ecat_weight, inter_weight, matric_weight;
	float aggregate;
	
	matric_percent = matric/1100 * 100;
	inter_percent = intermediate/550 * 100;
	ecat_percent = ecat/400 * 100;
	
	ecat_weight = ecat_percent * 0.4;
	inter_weight = inter_percent * 0.3;
	matric_weight = matric_percent * 0.3;
	
	aggregate = ecat_weight + inter_weight + matric_weight;

	cout << name << "'s UET Aggregate is=> " << aggregate << endl;

}

void compareMarks(string namestd1, string namestd2, int ecat1, int ecat2)
{

	system("cls");
	if(ecat1<ecat2)
	{
		cout << "Roll NO.1 is " << namestd2 << endl;
	}
	if(ecat2<ecat1)
	{
		cout << "Roll NO.1 is " << namestd1 << endl;
	}

}
