#include<iostream>
using namespace std;

int main(void){

	int x = 10;
	int y = 5;

	bool isEqual = x == y;
	bool isNotEqual = x != y;
	bool isGreater = x > y;
	bool isSmaller = x < y;

	cout << "isEqual: " << isEqual << endl;
	cout << "isNotEqual: " << isNotEqual << endl;
	cout << "isGreater: " << isGreater << endl;
	cout << "isSmaller: " << isSmaller << endl;

	return 0;

}
