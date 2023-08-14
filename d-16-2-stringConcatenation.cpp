#include<iostream>
#include<string>

using namespace std;

int main(void){

	string fname,lname;
	cout << "Enter Your First Name: ";
	getline(cin,fname);
	cout << "Enter Your Last Name: ";
	getline(cin,lname);

	string fullname = fname + " " + lname;

	cout << "Full Name: " << fullname << endl;

	return 0;

}
