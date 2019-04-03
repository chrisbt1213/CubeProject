#include "Cube.h"
#include<iostream>
#include<string>
using namespace std;

Cube::Cube() { 
	side = 3; 
}

int Cube::getSide() {
	return side;
}

void Cube::setSide(int sidePar) {
	if (sidePar < 3)
		cout << "Invalid Entry. The side value must be at least 3." << endl;
	else
		side = sidePar;
}


void Cube::displayCube(int sidePar) {
	if (sidePar < 3) {
		system("cls");
		cout << "Invalid Entry. Please enter a value higher than 3." << endl;
	}
	else {
		//declarations
		int userNum = sidePar;
		int side = userNum;
		int stars = 0;
		int spaceBefore = userNum - 1;
		int spaceBetween = userNum - 2;
		int spaceOnRightFace = 0;		
		int row = 0;
		int col;
		string output = "*";

		int colSpaceBetween;
		int counter = 0;		
		int starsMiddle = 0;
		int starsEnd = 0;
		int rowOnRightFace = 0;
		int colRightFace;		

		//calculations and output
		while (row < (userNum * 2) - 2) {
			col = 0;
			colSpaceBetween = 0;
			while (col < spaceBefore) {
				cout << " ";
				col++;
			}
			if (spaceBefore == 0)
				while (starsMiddle < userNum - 1) {
					cout << output;
					starsMiddle++;
				}
			stars = 0;
			while (stars < side) {
				cout << output;
				stars++;
			}
			while (colSpaceBetween < spaceBetween) {
				cout << " ";
				colSpaceBetween++;
			}
			if (spaceBefore > 0) {
				if (rowOnRightFace >= 1) {
					cout << output;
					colRightFace = 0;
					if (rowOnRightFace >= 2)
						while (colRightFace < spaceOnRightFace) {
							cout << " ";
							colRightFace++;
						}
					cout << output;
					spaceOnRightFace++;
				}
			}//if (spaceBefore > 0)	
			if (spaceBefore == 0 && counter < 1)
				cout << output;
			if (rowOnRightFace >= userNum) {
				cout << output;
				colRightFace = 0;
				while (colRightFace < spaceOnRightFace - 1) {
					cout << " ";
					colRightFace++;
				}
				cout << output;
				spaceOnRightFace--;
			}
			spaceBefore--;
			row++;
			rowOnRightFace++;
			cout << endl;
			side = userNum / userNum;
		}//while (row < (userNum * 2) - 2)
		while (starsEnd < userNum) {
			cout << output;
			starsEnd++;
		}
		cout << endl;
	}
	}