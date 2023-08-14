#include<iostream>

using namespace std;

void myFunction(){
	int a = 10;
	cout << "Inside Function: " << a << endl;
}

int main(void){

//	cout << "Outside Function: " << a << endl;
	myFunction();

	return 0;
}
