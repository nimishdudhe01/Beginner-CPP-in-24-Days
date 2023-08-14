#include<iostream>

using namespace std;

int main(void){

	int numbers[5] = {5,10,15,20,25};

	cout << "Element at index 0: " << numbers[0] << endl;
	cout << "Element at index 3: " << numbers[3] << "\n" << endl;

	numbers[3] = 39;

	int sum = 0;
	int product = 1;

	for(int i = 0; i < 5; ++i){
		cout << "Element at index " << i << ": " << numbers[i] << endl;
		sum = sum + numbers[i];
		product = product * numbers[i];
	}

	cout << "\n" << "The sum of all the elements is: " << sum << endl;
	cout << "The product of all the elements is: " << product << endl;

	return 0;

}
