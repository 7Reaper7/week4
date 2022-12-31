#include<iostream>
#include<windows.h>
using namespace std;

void price(int,int,int);

main()
{
	
	system("cls");
	float red_rose, white_rose, tulip;
	cout << "Enter the amount of red roses=> ";
	cin >> red_rose;
	cout << "Enter the amount of white roses=> ";
	cin >> white_rose;
	cout << "Enter the amount of tulips=> ";
	cin >> tulip;
	price(red_rose,white_rose,tulip);
}

void price(int red,int white,int tulip)
{
	float total,discount;
	red=red*2;
	white=white*4.10;
	tulip=tulip*2.50;
	total = red+white+tulip;
	cout << "Total=> " << total << endl;	
	if(total>200)
	{
		discount= total - (total*0.2);
		cout << "After discount=> " << discount;
	}
	
}