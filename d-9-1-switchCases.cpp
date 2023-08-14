#include<iostream>
using namespace std;

int main(void){

	char grade;

	cout << "Valid Grades: A,B,C" << endl;
	cout << "Enter your grade: ";
	cin >> grade;

	switch(grade){
		case 'A':
			cout << "Excellent Job!" << endl;
			break;
		case 'B':
			cout << "Good Job!" << endl;
			break;
		case 'C':
			cout << "You Can Do Better, Buddy!" << endl;
			break;
		default:
			cout << "Invalid grade!!!" << endl;
	}

	return 0;

}
