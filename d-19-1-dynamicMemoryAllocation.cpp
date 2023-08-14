#include<iostream>

using namespace std;

int main(void){

	int *ptr = new int;

	*ptr = 18802;

	cout << "Value at dynamically allocated memory(" << ptr << "): " << *ptr << endl;

	delete ptr;

	return 0;
}
