#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("welcome to the world of gussing numbers\n");
    random = rand() % 100 + 1; // gernating between 0 to 100

    do{
        printf("\n please enter your guess between(1 to 100):");
        scanf("%d", &guess);
        no_of_guess++;

        if (guess < random){
            printf("guess a larger number\n");
        } else if (guess > random){
            printf("guess a smaller number\n");
        } else{
            printf("congratulation !!! you have successfully guess the number in %d attempts", no_of_guess );
        }
        

    } while(guess != random);

    printf("\n bye bye, thanks for playing");
    printf("\n developed by: gurjot singh");
}