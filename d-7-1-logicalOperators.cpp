#include<iostream>
using namespace std;

int main(void){

	bool a = true;
	bool b = false;

	bool logicalAnd = a && b;
	bool logicalOr = a || b;
	bool logicalNotA = !a;
	bool logicalNotB = !b;

	cout << "logicalAnd: " << logicalAnd << endl;
	cout << "logicalOr: " << logicalOr << endl;
	cout << "logicalNotA: " << logicalNotA << endl;
	cout << "logicalNotB: " << logicalNotB << endl;

	return 0;

}
