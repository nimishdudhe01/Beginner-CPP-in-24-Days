#include<iostream>
#include<string>

using namespace std;

class BankAccount{

	private:
		double balance = 0;

	public:
		double getBalance() const{
			return balance;
		}

		int accountNumber;
		string accountHolder;

		void deposit(double depositValue){
			balance = balance + depositValue;
		}
		virtual void displayInfo(){
			cout << "Displaying Account Information: ";
			cout << "Account Number: " << accountNumber << endl;
			cout << "Account Holder: " << accountHolder << endl;
			cout << "Balance: " << getBalance() << endl;
		}
};

class SavingsAccount : public BankAccount{

	public:
		double interestRate = 4.5;

		void displayInfo() override {
			cout << "Savings Account Information:" << endl;
			cout << "\tAccount Number: " << accountNumber << endl;
			cout << "\tAccount Holder: " << accountHolder << endl;
			cout << "\tBalance: " << getBalance() << endl;
			cout << "\tInterest Rate: " << interestRate << "%" << endl;
		}
};

class CheckingAccount : public BankAccount{
	public:
		int overdraftLimit = 500;

		void displayInfo() override {
			cout << "\nCheckings Account Information:" << endl;
			cout << "\tAccount Number: " << accountNumber << endl;
			cout << "\tAccount Holder: " << accountHolder << endl;
			cout << "\tBalance: " << getBalance() << endl;
			cout << "\tOverdraft Limit: " << overdraftLimit << endl;
		}
};

int main(void){

	BankAccount *accPtr;
	SavingsAccount sAcc1;
	CheckingAccount cAcc1;

	sAcc1.deposit(1000);
	cAcc1.deposit(2893);

	sAcc1.accountNumber = 1000;
	cAcc1.accountNumber = 1001;
	sAcc1.accountHolder = "Nimish Dudhe";
	cAcc1.accountHolder = "Nimish Dudhe";

	accPtr = &sAcc1;
	accPtr->displayInfo();

	accPtr = &cAcc1;
	accPtr->displayInfo();

	return 0;
}
