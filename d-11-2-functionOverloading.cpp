#include<iostream>
#include<string>

using namespace std;

void greet(string name){
	cout << "Hello " << name << "!" << endl;
}

int add(int a, int b){
	return a + b;
}

double add(double a, double b){
	return a + b;
}

int main(void){

	greet("Nimish Dudhe");

	cout << "The Sum Is " << add(7.5,4.67) << endl;

	return 0;

}
