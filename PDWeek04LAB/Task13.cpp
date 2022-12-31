#include<iostream>
#include<windows.h> 
using namespace std;

void sleep(int);

main()
{
	
	system("cls");
	int holiday;
	cout << "Enter the number of holidays=> ";
	cin >> holiday;
	sleep(holiday);


}

void sleep(int holiday)
{

	int working_days, game_time, difference;
	int in_hours;
	float in_mins;
	
	working_days= 365-holiday;
	game_time= (working_days*63) + (holiday*127);
	
	if(game_time<30000)
	{
		difference= 30000-game_time;
	}
	if(game_time>30000)
	{
		difference= game_time-30000;
	}
	
	in_hours= difference/60;
	in_mins= difference % 60;
	
	if(game_time>30000)
	{
		cout << "Tom will die. please let him sleep." << endl;
		cout << in_hours << " hours and " << in_mins << " minutes for play";	
	}
	if(game_time<=30000)
	{
		cout << "Tom will be fine." << endl;
		cout << in_hours << " hours and " << in_mins << " minutes less for play";
	}
	
}