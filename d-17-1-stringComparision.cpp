#include<iostream>
#include<string>

using namespace std;

int main(void){

	string s1 = "apple";
	string s2 = "apple";
	string s3 = "banana";

	if(s1 == s2){
		cout << "S1 is equal to S2." << endl;
	}else{
		cout << "S1 is not equal to S2." << endl;
	}
	if(s1 == s3){
                cout << "S1 is equal to S3." << endl;
	}else{
		cout << "S1 is not equal to S3." << endl;
	}
	if(s2 == s3){
		cout << "S2 is equal to S3." << endl;
	}else{
		cout << "S2 is not equal to S3." << endl;
	}

	if(s1.compare(s2) == 0){
		cout << s1 << " is equal to " << s2 << endl;
	}

	return 0;
}
