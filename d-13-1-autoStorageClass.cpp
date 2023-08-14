#include<iostream>
#include<typeinfo>

using namespace std;

int main(void){

	auto x = 10;
	auto y = 83.9271;

	cout << "x: " << x << ", y: " << y << endl;
	cout << "Data Type of x: " << typeid(decltype(x)).name() << endl;
	cout << "Data Type of y: " << typeid(decltype(y)).name() << endl;

	return 0;

}
