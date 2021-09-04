#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()

{
    int number,guess,nguesses=1;

    srand(time(0));//generates different random number almost everytime we run the code

    number = rand()%100+1;//generates random number between 1-100
    printf("\nThe random number is: %d ", number);
    //keep running the loop until the number is guessed

    do
    {
        printf("\nGuess the number between 1 to 100: ");
        scanf("%d",&guess);

        if (guess>number)
        {
            printf("\nLower number please!");
        }
        else if(guess<number)
        {
            printf("\nHigher number please!");
        }
        else
        {
            printf("\nYou guessed it in %d attempts",nguesses);
        }
        nguesses++;
    } while (guess != number);

    

    return 0;
}
