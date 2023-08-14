#include<iostream>

using namespace std;

int main(void){

	int size;
	cout << "Enter array size: ";
	cin >> size;
	cout << endl;
	int *arr = new int[size];

	for(int i = 0; i < size; ++i){
		*arr = 2*i*i - 3*i + 1;
		cout << "The Element " << i << " is allocated at " << arr << " And the value is: " << *arr << endl;
		arr++;
	}

	arr = arr - size;

	delete[] arr;

	return 0;
}
