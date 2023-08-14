#include<iostream>
#include<string>

using namespace std;

int main(void){

	string sentence = "C++ provides a range of string manipulation functions in the <string> header.";

	size_t found = sentence.find("range");

	if(found == string::npos){
		cout << "Substring not found." << endl;
		exit(21);
	}

	string newSubstring = sentence.substr(4, 10);
	cout << "The new substring is: " << newSubstring << endl;

	sentence.replace(4, 8, "Hehe");
	cout << "New string after replacement is: " << sentence << endl;

	sentence.insert(11, "+ Inserted Text +");
	cout << "New string after insertions is: " << sentence << endl;

	return 0;

}
