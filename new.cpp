// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
int k;

int main()
{
	ofstream console;
	console.open ("output.txt");
	for (k = 1; k <+ 1000000; k++)
	{
		console << (k) << " ";
		cout << k << " ";
		
	}
	console.close();
    return 0;
}
