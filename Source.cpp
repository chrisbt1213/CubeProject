#include<iostream>
#include"Cube.h"
using namespace std;

int main() {
	//declarations
	int userNum;
	Cube* userCube = new Cube();

	//get user input
	cout << "Enter a side value: ";
	cin >> userNum;

	//calculation
	userCube->setSide(userNum);
	
	//output
	userCube->displayCube(userNum);
	
	system("pause");
	return 0;
}