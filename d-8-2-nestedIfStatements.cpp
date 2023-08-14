#include<iostream>
using namespace std;

int main(void){

	int number;
//	cout << "Enter a Number: ";
	cin >> number;

	if( number % 2 == 0){
		cout << "The Number Is Divisible by 2" << endl;
		if( (number / 2) % 3 == 0){
			cout << "The Number Is Divisible by 3" << endl;
			cout << "The Number Is Divisible by 6" << endl;
		}
	}else if( number % 3 == 0){
		cout << "The Number Is Divisible by 3" << endl;
	}else{
//		cout << "The Number Is Not Divisible by 6" << endl;
	}

	return 0;

}
