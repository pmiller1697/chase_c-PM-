//Text RPG

#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

//Start
using namespace std;
string char_name;
char yn = 'a';
void start() //Shows the welcome screen
{
	printf("Welcome to The World of Angard!\n\n");
	printf("All questions in this game will accept the following format: y or n\n");
	printf("for yes and no repsectivly.\n");
}
void create_character() //creates a new character
{
	printf("What do you wish to name your character? \n");
	cin >> char_name;
	printf("Are you sure you want to name your character,");
	cout << char_name;
	printf("?\n");
}

void new_or_not() // checks to open a new game or not
{
	printf("Are you a new character? ");
	cin >> yn;
	if (yn == 'y')
		create_character();
	else
		cerr;
}
	
int main() // main
{
	start();
	new_or_not();
	return 0;

}