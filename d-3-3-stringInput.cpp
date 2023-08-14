#include<iostream>
#include<string>

using namespace std;

int main(void){

	string name;
	cout << "Enter Your Name: ";
	getline(cin, name);

	cout << "\nHello " << name << "!" << endl;

	return 0;

}
