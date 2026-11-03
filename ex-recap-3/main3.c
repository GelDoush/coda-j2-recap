#include <stdlib.h>
#include <stdio.h>

int main(void) {
	char email[50];
	int start_year = 2026;
	int end_year = 2027;
	
	printf("What is your email ? ");
	fgets(email,sizeof(email),stdin);

	printf("email : %s \n study year : %d - %d \n", email, start_year, end_year);
	exit(0);
}
