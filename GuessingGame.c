#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 * 
 * Description: Program that allows a user to guess a number
 *				between 0 to 10 and output if user is correct or not.
 * 
 * Return: Always 0 (Success).
*/

int main(void)
{
	// Generate random number between 0 - 10
	int maxValue = 10;
	srand(time(0));
	int randomNumber = rand() % maxValue + 1;

	// printf("%d\n", randomNumber); to check generated random number

	// Get user input
	int userGuess;
	printf("Guess a number between 0 - %d: ", maxValue);
	scanf("%d", &userGuess);

	//Output result to user
	if (userGuess == randomNumber)
	{
		printf("You win!\n");
	}
	else
	{
		printf("(: You loose! better luck next time!\n");
	}

	printf("Thanks for playing\n");

	return (0);
}