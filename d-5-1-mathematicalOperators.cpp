#include<iostream>
using namespace std;

int main(void){

	int a,b;
	cout << "Enter 2 Values a and b(Separated by a Space): ";
	cin >> a >> b;
	cin.ignore();

	int sum = a + b;
	int difference = a - b;
	int multiplication = a * b;
	int quotient = a / b;
	int remainder = a % b;

	cout << "The sum of a and b is " << sum << endl;
	cout << "The difference of b substracted from a is " << difference << endl;
	cout << "The multiplication of a and b is " << multiplication << endl;
	cout << "The quotient of a divided by b is " << quotient << endl;
	cout << "The remainder of a divided by b is " << remainder << endl;

	return 0;

}
