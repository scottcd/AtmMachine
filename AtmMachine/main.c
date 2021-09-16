#include <stdio.h>
#include <string.h>
#include "atmFunctions.h"


int main()
{
	char username[25];
	char password[25];
	printf("%s\n",loadAccounts());
	
	while(1)
	{
		printf("Enter your username: ");
		gets(username);
		printf("Enter your password: ");
		gets(password);
		printf("%s\n", login(username, password));
	}

	return 0;
}
