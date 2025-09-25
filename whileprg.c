/*
Create a guessing game where the user has to guess a number between 1 and 100.
The user will get 5 chances to guess the number. If they guess correctly.
*/
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int r,guess,count=1,score=100;
    srand(time(NULL));
    r=rand()%100+1;
    printf("\n %d",r);

    while(count<=5)
    {
        printf("\n Enter your guess: ");
        scanf("%d",&guess);

        if(guess<r)
        {
            printf("\n Your guess is too low.Try larger number\n");
            score-=10;
            
        }
        else if(guess>r)
        {
            printf("\n Your guess is too high.Try smaller number\n");
            
        }
        else
        {
            printf("\n Congratulations! You guessed the number correctly\n");
            printf("\n Your final score is %d",score);
            break;
        }
        count++;
        if(count>5)
        {
            printf("Your all guesses are wrong,You lost the game");
        }
        
        
    }
    

    return 0;
}
