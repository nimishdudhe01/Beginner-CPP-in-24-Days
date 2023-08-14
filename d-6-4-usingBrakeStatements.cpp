#include<iostream>
using namespace std;

int main(void){

	int num;
	cout << "Enter the Value At Which You Wanna Stop the Count: ";
	cin >> num;

	for(int i = 0;;++i){
		if(i == num){
			break;
		}
		cout << "Count: " << i << endl;
	}

	return 0;

}
