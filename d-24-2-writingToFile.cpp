#include<iostream>
#include<fstream>

using namespace std;

int main(){

	ofstream outputFile("newFile");
	ifstream inputFile("dlist");

	outputFile << "Hello, World!" << endl;
	outputFile << 1028 << endl;

	outputFile.close();
	inputFile.close();

	return 0;
}
