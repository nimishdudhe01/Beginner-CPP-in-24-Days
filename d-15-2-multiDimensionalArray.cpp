#include<iostream>

using namespace std;

int main(void){

	int matrix[4][4] = {	{1,2,3,4},
				{2,3,4,5},
				{3,4,5,6},
				{4,5,6,7}	};

	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 4; ++j){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}
