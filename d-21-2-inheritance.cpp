#include<iostream>

using namespace std;

class Animals{
	public:
		int legs = 4;
		int hands = 0;
		int eyes = 2;
		int nose = 1;
};

class Humans : public Animals{
	public:
		int legs = 2;
		int hands = 2;
};

int main(void){

	Humans Nimish;
	Animals myDog;

	cout << "My Dog has " << myDog.legs << " legs, " << myDog.hands << " hands, " << myDog.eyes << " eyes and " << myDog.nose << " nose." << endl;
        cout << "Nimish has " << Nimish.legs << " legs, " << Nimish.hands << " hands, " << Nimish.eyes << " eyes and " << Nimish.nose << " nose." << endl;

	return 0;

}
