#include "interaction.h"
using namespace std;
void interaction::auth()
{
	int testid;
	int testpin;
	cout << "enter ID: ";
	cin >> testid;
	cout << "enter pin: ";
	cin >> testpin;
	cout << "Welcome!"<<endl;
}

void interaction::gui()
{
	account testuser1;
	account testuser2;
	int choice=0;
	float transfernumber=0.00;
	do {
		cout << "1.Balance" << endl << "2.transfer" << endl << "3.deposit" << endl << "4.withdrawl" << endl<<"5.exit"<<endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << testuser1.balance << endl;
			break;
		case 2:
			cout << "How much to transfer?"<<endl;
			cin >> transfernumber;
			transfer(testuser1, testuser2, transfernumber);
			cout << "Finished!" << endl;

			break;
		case 3: 
			cout << "how much to deposit?" << endl;
			cin >> transfernumber;
			testuser1.pay_in(transfernumber);
			break;
		case 4:
			cout << "how much to withdrawl?" << endl;
			cin >> transfernumber;
			testuser1.pay_out(transfernumber);
			break;
		case 5:
			cout << "goodbye!";
		}
	} while (choice != 5);
}
