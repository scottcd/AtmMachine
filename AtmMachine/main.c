#include <stdio.h>
#include <string.h>
#include "atmFunctions.h"


int main()
{
	char username[25];
	char password[25];
	loadAccounts();
	
	while(1)
	{
		printf("Welcome to the ATM machine.\n");
		printf("Enter your username: ");
		gets(username);
		printf("Enter your password: ");
		gets(password);
		int validation = login(username, password);

		if(validation == 0)
		{
			continue;
		}
		
		int menuChoice = 0;
		
		while(menuChoice != 4)
		{
			printf("Successful user login!\n");
			printf("Please select an option below. (1-4)");
			printf("1. View Balance");
			printf("2. Deposit" );
			printf("3. Withdrawal");
			printf("4. Log Out");

			int menuChoice = gets();
			char atmResponse[100] = processSelection(menuChoice);
		
			printf("%s \n\n", atmResponse);
		}
	}

	return 0;
}
