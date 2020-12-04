#include <iostream>
#include <string>
#include <math.h> 
using namespace std;

int main(int argc, char** argv){
	float floatPositif;
	int intPositif;
	char more = 'y';
	for(int count = 0; count<10 && more == 'y'; count++)
	{
		cout << "saisir un nombre à virgule positif : ";
		cin >> floatPositif;
		intPositif = round(floatPositif);
		cout << intPositif << "\n";
		cout << "more ? y/n ";
		cin >> more;
	}

}