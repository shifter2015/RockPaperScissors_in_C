#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
extern int validateChoice(char choice[12]){
	char *pChoice = choice;
	int size = strlen(choice);
	size = size;
	for(; pChoice < &choice[size]; pChoice++){
		*pChoice = tolower(*pChoice);
	}
	if(strcmp(choice, "rock") == 0){
		return 1;
	} else if(strcmp(choice, "paper") == 0) {
		return 1;
	} else if(strcmp(choice, "scissors") == 0) {
		return 1;
	} else {
		return 0;
	}
}
extern int whoWon(char playerChoice[12], char computerChoice[12]){
	char *pPlayerChoice = playerChoice;
	int playerChoiceSize = strlen(playerChoice);
	for(; pPlayerChoice<&playerChoice[playerChoiceSize]; pPlayerChoice++){
		*pPlayerChoice = tolower(*pPlayerChoice);
	}
	if(strcmp(playerChoice, computerChoice) == 0) {
		// Tie
		return 0;
	} else if(strcmp(playerChoice, "rock") == 0 && strcmp(computerChoice, "paper") == 0) {
		// Lost
		return 1;
	} else if(strcmp(playerChoice, "rock") == 0 && strcmp(computerChoice, "scissors") == 0) {
		// Won
		return 2;
	} else if(strcmp(playerChoice, "paper") == 0 && strcmp(computerChoice, "rock") == 0) {
		// Won
		return 2;
	} else if(strcmp(playerChoice, "paper") == 0 && strcmp(computerChoice, "scissors") == 0) {
		// Lost
		return 1;
	} else if(strcmp(playerChoice, "scissors") == 0 && strcmp(computerChoice, "rock") == 0) {
		// Lost
		return 1;
	} else if(strcmp(playerChoice, "scissors") == 0 && strcmp(computerChoice, "paper") == 0) {
		// Won
		return 2;
	} else {
		return 3;
	}
}