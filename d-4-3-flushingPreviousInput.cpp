#include<iostream>
using namespace std;

int main(void){

	int num;
	string text;

	cout << "Enter A Number: ";
	cin >> num;
	cout << "The Number Entered is: " << num << endl;

	cin.ignore();

	cout << "\nEnter Some Text: ";
	getline(cin, text);
	cout << "The text You Entered is: " << text << endl;

	return 0;

}
