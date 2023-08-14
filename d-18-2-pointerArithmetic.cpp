#include<iostream>

using namespace std;

int main(void){

	int array[5] = {5,10,15,20,25};
	int *ptr = array;

	cout << "Array Elements Are: ";
	for(int i = 0; i < 5; ++i){
		cout << *ptr << " ";
		++ptr;
	}

	return 0;
}
