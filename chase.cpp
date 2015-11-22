//CREATED BY PATRICK MILLER


#include <iostream>
#include <string>
#include <fstream>


int hp;
int gold;
int dmg;
int armor;
string char_name;
int choice_one;
string choice_two;
void save_system()
{
	
}

void character_creation()
{
	cout << "Welcome!\n What is your name?\n";
	cin >> char_name;
	cout << "Welcome, " << char_name << "!" << endl;
}
void character_stats()
{
	cout << char_name << ", please chose a class: \n";
	cout << " 1. Mage\n 2. Dwarf\n 3. Warrior\n 4. Scout" << endl;
	cin >> choice_two;
	if (choice_two == "1"){
		int hp = 100;
		int gold = 100;
		int dmg= 3;
		int armor = 10;
		
	}
	else if (choice_two == "2") {
		int hp = 100;
		int gold = 150;
		int dmg = 2;
		int armor = 12;
		
	}
	else if (choice_two == "3") {
		int hp = 150;
		int gold = 100;
		int dmg = 4;
		int armor = 15;
		
	}
	else if (choice_two == "4") {
		int hp = 100;
		int gold = 100;
		int dmg = 2;
		int armor = 5;
		
	}
	else 
		cout << "ERROR" << endl;

}

void print_stats()
{
	cout << hp;
	cout << gold;
	cout << dmg;
	cout << armor;
}

int main()
{
	ofstream writer;
	writer.open ("stats.sav");
	character_creation();
	character_stats();
	print_stats();
	writer.close();
	return 0;
}
