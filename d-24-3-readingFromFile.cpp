#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(void){

	string line;

	ofstream outputFile("newFile");
	ifstream inputFile("dlist");

	while(getline(inputFile, line)){
		cout << "Line Read: " << line << endl;
	}

	inputFile.close();
	outputFile.close();

	return 0;
}
