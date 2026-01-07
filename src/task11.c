#include <stdio.h>
#include <stdlib.h>

int main(void){
    int coin_flips, heads = 0, tails = 0;

    srand(10000);

    printf("How many times would you like to flip the coin: ");
    scanf("%d", &coin_flips);

    for (int i = 0; i < coin_flips; i++) {
        if (rand() % 2 == 1) {
            heads++;
        } else {
            tails++;
        }
    }

    printf("Results for %d flips is\n", coin_flips);
    printf("Heads: %d\n", heads);
    printf("Tails: %d\n", tails);

    return 0;
}