# Number_guessing_game.c
This is my first interactive game made with c programming.
It generates a random number between 1- 100, which we have to guess and it will keep on telling you until you get it right.

This code uses three header files which is <stdio.h>, <stdlib.h>, <time.h>.
In this code we program the computer to generate random numbers.(I made two files one for generating the random number and one in which this code is embedded for use)
,after generating the random code the computer stores the value.

then we come to the second logic:

I made the program fetch some user input and made it compare to the randomly generated number by using the (if,else) logic;

 if (guess>number)
        {
            printf("\nLower number please!");
        }
        else if(guess<number)
        {
            printf("\nHigher number please!");
        }
        
I hope you understand this code :); It does a very simple task, it compares our guessed number to the actual value stored on the computer if 
the guess is lower than it prints: lower number please!
if the guess is higher than the actual vlue it prints: higher number please!
this way the computer keeps telling us that the number we guessed is wrong with a clue to it, we finally get to the actual value.

 else
        {
            printf("\nYou guessed it in %d attempts",nguesses);
        }
        nguesses++;
        
this block of code just records our attempts to get it correct and prints it.

:) voila! that's how easy it is! 
Thank you.
