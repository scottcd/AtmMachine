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
		int validation = (int)login(username, password);

		if(validation == 0)
		{
			continue;
		}
		printf("Successful user login!\n");
		int menuChoice = 0;
		
		while(menuChoice != 4)
		{
			printf("Please select an option below. (1-4)");
			printf("\n1. View Balance");
			printf("\n2. Deposit" );
			printf("\n3. Withdrawal");
			printf("\n4. Log Out\n\n");

			char buffer[8];
			gets(buffer);
			menuChoice = (int)*buffer - 48;

			printf("%d", menuChoice);

			char* atmResponse = processSelection(menuChoice);
		
			printf("%s \n\n", atmResponse);
		}
	}

	return 0;
}
