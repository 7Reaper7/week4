#include<iostream>
using namespace std;

void reprint(string);

main ()
{
	string name;
	cout << "Enter your name=> ";
	cin >> name;
	while(true)
	{
		reprint(name);
	}
}

void reprint(string uname)
{
	cout << uname;
} 