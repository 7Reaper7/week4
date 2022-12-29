#include<iostream>
using namespace std;

void reprint(string);

main ()
{
	string name;
	while(true)
	{
		cout << "Enter your name=> ";
		cin >> name;
		if(name=="Irzam")
		{
			while(true)
			{
				reprint(name);
			}
		}
	}
}

void reprint(string uname)
{
	cout << uname;
} 