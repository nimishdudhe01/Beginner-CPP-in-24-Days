#include<iostream>
#include<string>

using namespace std;

void greet(string name){
	cout << "Hello " << name << "!" << endl;
}

int add(int a, int b){
	return a + b;
}

int main(void){

	greet("Nimish Dudhe");
	int sum = add(9,10);

	cout << "The Sum of 9 and 10 is " << sum << endl;

	return 0;

}
