#include<iostream>
using namespace std;

int main(void){

	int count;
	cout << "Enter a Value: ";
	cin >> count;

	do{
		cout << "Count: " << count << endl;
		count = count + 1;
	}while(count < 10);

	return 0;

}
