#include "account.h"

account account1 = {"chandler", "bestUsername", "betterPassword", 6};
account account2 = {"jo mama", "user", "pass", 10};

char* foo()
{
	
	char* ret =  account1.name; 
		

	return ret;
}
