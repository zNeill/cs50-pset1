#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
float change;
printf("Oh hai! ");
    do{
       printf("How much change is owed?\n");
        change = GetFloat();
    }while(change <= 0);

int cents = round(change * 100);
//printf("the value you entered is %i cents\n", cents);
/*
While not necessary for the completion of this assignment,
I thought it would be advantageous for my personal use to be
able to convert this script to provide the actual number of each coin
required to give the proper change. This also helped with error checking.
*/
int quarters = 0;
int dimes = 0;
int nickels = 0;
int pennies = 0;
while(cents >= 25)
    {
    cents = cents - 25;
    quarters++;
    }
//printf("%i quarters - %i cents remain\n", quarters, cents);
while(cents >= 10)
    {
    cents = cents - 10;
    dimes++;
    }
//printf("%i dimes - %i cents remain\n", dimes, cents);
while(cents >= 5)
    {
    cents = cents - 5;
    nickels++;
    }
//printf("%i nickels - %i cents remain\n", nickels, cents);
while(cents >= 1)
    {
    cents = cents - 1;
    pennies++;
    }
//printf("%i pennies\n - %i cents remain", pennies, cents);
int coins = quarters + nickels + dimes + pennies;
printf("%i\n", coins);
}