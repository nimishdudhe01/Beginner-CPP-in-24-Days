#include<iostream>
#include<fstream>

using namespace std;

int main(){

	ofstream outputFile("newFile");
	ifstream inputFile("dlist");

	outputFile.close();
	inputFile.close();

	return 0;
}
