#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()

{
    int number;

    srand(time(0));//generates different random number almost everytime we run the code

    number = rand()%100+1;//generates random number between 1-100
    printf("\nThe number is %d",number);

    return 0;
}