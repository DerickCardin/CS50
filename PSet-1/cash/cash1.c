#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){
     float change;
    int cents;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int totalcoins = 0;

    do {
        change = get_float("Change: ");
    }
    while (change < 0.00);
        cents = round(change * 100.00); //Rounds dollar amount into change
        quarters = cents / 25; // Divide total amount by quarters
        dimes = (cents % 25) / 10; //take the modulo after quarters have been totaled and check for how many dimes
        nickels = (cents % 25 % 10) / 5; //Take the modulo of quarters and dimes and check for how many nickels can be used
        pennies = (cents % 25 % 10 % 5) / 1; //Take the modulo of quarters, dimes, and nickels and check for how many pennies can be used

        totalcoins = quarters + dimes + nickels + pennies; //Add the toal of number of each coin used
         printf("%d\n", totalcoins); //Print total number of coins

}

