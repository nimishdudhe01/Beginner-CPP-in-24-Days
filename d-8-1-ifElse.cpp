#include<iostream>

using namespace std;

int main(void){

	int age;
	cout << "Enter Your Age: ";
	cin >> age;

	cin.ignore();

	if ( age >=18 ){
		cout << "You Are Eligible to Vote." << endl;
	}else{
		cout << "You Aren't Eligible to Vote" << endl;
	}

	return 0;
}
