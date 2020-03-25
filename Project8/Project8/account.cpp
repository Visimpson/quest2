#include "account.h"



void account::pay_in(float innage)
{
	balance = balance + innage;
}

void account::pay_out(float outtage)
{
	balance = balance - outtage;
}	

void transfer(account id1, account id2, float trannage)
{
	id1.balance = id1.balance - trannage;
	id2.balance = id2.balance + trannage;
}
