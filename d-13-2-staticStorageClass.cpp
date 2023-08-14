#include<iostream>

using namespace std;

void myFunction(){
	static int count = 0;
	count++;

	cout << "Count: " << count << endl;
}


int main(void){

	myFunction();
	myFunction();
	myFunction();

	return 0;

}
