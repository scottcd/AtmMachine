#include "account.h"
#include <string.h>

const int numberOfAccounts = 2;
int loggedIn = -1; // int representing the currently logged in account, -1 if none 

account accountList[2] = {};

void loadAccounts()
{
	account a1 = {"Bobby Bee","user1","pass1",100};
	account a2 = {"Joe Mahma","user2","pass2",100};
	
	accountList[0] = a1;
	accountList[1] = a2;

}

char* processSelection(int menuChoice)
{
	char* ret;
	int bal;
	switch(menuChoice)
	{
		case 1:
			bal = viewBalance();
			ret = bal + '0';
			break;
		case 2:
			break;
		case 3:
			break;
		default:
			ret = "";
			loggedIn = -1;
	}

	char* ret =  accountList[0].name; 
	

	return ret;
}

char* login(char* username, char* password) {
	for (int i = 0; i < numberOfAccounts; i++) {
		if (strcmp(accountList[i].username, username) == 0) {
			if (strcmp(accountList[i].password, password) == 0) {
				loggedIn = i;
				return "Success";
			}
			else { 
				return "Invalid password";
			}
		}
	}
	return "Invalid username";
}


int viewBalance()
{
	int currentBal = (int)accountList[loggedIn].balance;

int* viewBalance()
{
	int* currentBal = accountList[loggedIn].balance;

	return currentBal;
}
