#include<iostream>

using namespace std;

int main(void){

	int number = 1972;
	int *ptr;

	ptr = &number;

	cout << "Value stored in the variable is: " << number << endl;
	cout << "Value stored at the memory location " << ptr << " is: " << *ptr << endl;

	return 0;

}
