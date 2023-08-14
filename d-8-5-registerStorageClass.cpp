#include<iostream>

using namespace std;

int main(void){

	register int i = 0;
	for(i = 0; i < 10000000; ++i){
		i = i + 1;
	}
	cout << "Count: " << i << endl;
	return 0;
}
