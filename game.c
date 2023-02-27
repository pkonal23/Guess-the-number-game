#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("the number is %d \n", number);

    int guess, a;
    a = number;
    guess = 0;
    int t;
    while (t != number)
    {

        printf("enter guess ");
        scanf("%d", &t);
        if (t > number)
        {
            printf("no. is less than your number guessed\n");
        }

        else if (t < number)
        {
            printf("no. is more than your number guessed\n");
        }

        guess++;

       
    }

    if(t == number)
        {
            printf("Your guess is CORRECT! You took %d guesses", guess );

        }
    return 0;
}