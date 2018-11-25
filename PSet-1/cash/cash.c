#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    int cents;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int totalcoins = 0;

//Get total change owed
    do
    {
        change = get_float("Change: ");
    }
    while (change < 0.0);

//Convert from dollars to cents $1 = 100 cents
    cents = round(change * 100.00);

//Check how many quarters can be used- add to total number of coins and decrease from total change owed
    while (cents >= 25)
    {
        quarters = cents / 25;
        totalcoins += quarters;
        cents -= (quarters * 25);
    }

//Check how many dimes
    while (cents >= 10)
    {
        dimes = cents / 10;
        totalcoins += dimes;
        cents -= (dimes * 10);
    }

//Check how many nickels
    while (cents >= 5)
    {
        nickels = cents /  5;
        totalcoins += nickels;
        cents -= (nickels * 5);
    }
//Check how many pennies
    while (cents >= 1)
    {
        pennies = cents / 1;
        totalcoins += pennies;
        cents -= (pennies * 1);
    }

//Print total number of coins used to make change
    printf("%i\n", totalcoins);
}