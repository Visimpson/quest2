#pragma once
#include <iostream>
#include <string>
class account {
public:
	int unsigned id;
	int unsigned pin;
	float balance;
	account() {
		id = 0;
		pin = 0;
		balance = 0.00;
	}
	void pay_in(float innage);
	void pay_out(float outtage);

};
void transfer(account id1, account id2, float trannage);