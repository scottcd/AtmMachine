#include "account.h"

account accountList[22] = {};

char* loadAccounts()
{
	account a1 = {"Bobby Bee","user1","pass1",100};
	account a2 = {"Joe Mahma","user2","pass2",100};
	
	accountList[0] = a1;
        accountList[1] = a2;
	char* ret =  accountList[0].name; 
		

	return ret;
}
