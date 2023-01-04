#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main()

{
    int secretNum = 7;
    int guessNum;
    printf("Enter your guessing number: ");
    scanf("%d", &guessNum);

    int guessCount = 0;
    int guessLimit = 2;
    int outOfGuess = 0;

    while(secretNum != guessNum && outOfGuess == 0){
        if(guessCount < guessLimit){
        printf("Guess Again: ");
        scanf("%d", &guessNum);
        guessCount++;
        }else{
        outOfGuess = 1;}

    }
    if(outOfGuess == 1){
        printf("Out of guess, You lose!");

    }else{
    printf("Congratulations! You guess the number.");
    }



    return 0;
}
