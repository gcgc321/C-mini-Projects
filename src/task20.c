#include <stdio.h>

struct stats
{
    int points;
    int games;
};

struct  stats player[5];

int main()
{
    float avg;

    for(int i = 0; i < 5; i++) {
        // pointer to the current player in the array
		struct stats *P = &player[i];
		
        printf("Enter Player %d's point total:\n", i+1);
        scanf("%d", &P-> points);
        printf("Enter Player %d's game total:\n", i+1);
        scanf("%d", &P -> games);
	}

    // for loop through the array of the player 
    // for each player total / game for avg
    // then display the players avg with printf
    for (int i = 0; i < 5; i++){
        struct stats *P = &player[i];
        
        avg = (P -> points) / (P -> games);
        printf("Player %d's scoring average was %.2f ppg\n", i+1, avg);
    }

    return 0;
}