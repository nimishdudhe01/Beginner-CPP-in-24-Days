#include<iostream>
#include<string>

using namespace std;

class Person{
	public:
		string name;
		int age;

	Person(){
		name = "Unknown";
		age = 0;
	}

	Person(const string& n, int a){
		name = n;
		age = a;
	}

	Person(const Person& other){
		name = other.name;
		age = other.age;
	}

	~Person(){
		cout << "Destructor Called and Data Deleted For "<< name << endl;
	}

};

int main(void){

	Person p1;
	Person p2("Nimish Dudhe", 22);
	Person p3 = p2;

	Person *personPtr;

	personPtr = &p1;
	cout << "The name of the person P1 is " << personPtr->name << endl;

	personPtr = &p2;
	cout << "The name of the person P2 is " << personPtr->name << " And his age is " << personPtr->age << endl;

	personPtr = &p3;
	p3.name = "Nimish Dudhe New";
	cout << "The name of the person P3 is " << personPtr->name << " And his age is " << personPtr->age << "\n" << endl;

	return 0;
}
