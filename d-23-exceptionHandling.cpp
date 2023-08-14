#include<iostream>
#include<iomanip>

using namespace std;

int main(void){

	try{
		int dividend = 1092;
		int divisor = 05;

		if(divisor == 0){
			throw runtime_error("Division by Zero is not allowed.");
		}

		double result = (double)dividend/divisor;
		cout << "Result: " << fixed << setprecision(2) << result << endl;
	}catch (const runtime_error& ex){
		cout << "Exception Caught: " << ex.what() << endl;
	}

	return 0;
}
