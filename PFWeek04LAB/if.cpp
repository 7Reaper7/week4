#include<iostream>
using namespace std;

void checkresult(int marks);

main()
{

	int marks;
	while(true)
	{
		cout << "Enter marks=> ";
		cin >> marks;
		checkresult(marks);
	}

}

void checkresult(int marks)
{

	if(marks>50)
	{
		cout << "pass" << endl;
	}
	if(marks<50)
	{
		cout << "fail" << endl;
	}
	if(marks==50)
	{
		cout << "WORK HARD" << endl;
	}

}