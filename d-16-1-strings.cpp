#include<iostream>
#include<string>

using namespace std;

int main(void){

	string myString = "Hello, World!";
	string anotherString;

	cout << myString << endl;
	cout << "Enter A String: ";
	getline(cin, anotherString);

	cout << "The String You Entered is: " << anotherString;

	return 0;

}
