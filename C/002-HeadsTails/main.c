#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define HEADS 0
#define TAILS 1

int main(void)
{
	printf("Heads or Tails [h|t]? \n");

        char buffer;
	scanf("%c", &buffer);

	// Seed the rng and generate outcome
	srand(time(NULL));
	short int outcome = (rand() % 2);	

	if (buffer == 'h') {
		if (outcome == HEADS) {
			printf("Winner!\n");
		} else {
			printf("Loser!\n");
		}
	}
	if (buffer == 't') {
		if (outcome == TAILS) {
			printf("Winner!\n");
		} else {
			printf("Loser!\n");
		} 
	}
	if (buffer != 'h' && buffer != 't') {
		printf("%c is not a correct input", buffer);
	}
	return 0;
}
