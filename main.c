#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "validate.h"
#include <time.h>
int main() {
	bool validChoice;
	char playerChoice[9];
	char computerChoice[9];
	printf("Choose! (Rock, Paper, Scissors)");
	scanf("%s", playerChoice);
	if(validateChoice(playerChoice) == 0) {
		printf("Invalid choice");
		return 0;
	}
	srand(time(NULL));
	int randNum = rand() % 3;
	if(randNum == 0){
		strcpy(computerChoice, "rock");
	}else if(randNum == 1){
		strcpy(computerChoice, "paper");
	} else {
		strcpy(computerChoice, "scissors");
	}
	printf("Your choice: %s\n", playerChoice);
	printf("Computer's choice: %s\n", computerChoice);
	switch(whoWon(playerChoice, computerChoice)) {
		case 0 : 
			printf("You tied!\n");
			break;
		case 1 :
			printf("You lost!\n");
			break;
		case 2 :
			printf("You won!!!\n");
			break;
		case 3 :
			printf("Something went wrong...\n");
			break;
	}
	return 0;
}