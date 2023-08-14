#include<iostream>

using namespace std;

class ComplexNum{
private:
	string objectName;

public:

	ComplexNum(const string& name) : objectName(name){}

	string getName() const{
		return objectName;
	}

	int real;
	int imaginary;
};

int main(void){

	ComplexNum iota("iota");

	iota.real = 0;
	iota.imaginary = 1;

	cout << "Value of " << iota.getName() << ": " << iota.real << " + " << iota.imaginary << "i" << endl;

	return 0;
}
