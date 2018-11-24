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

do
{
  change = get_float("Change: ");
}
while ( change < 0.0);

cents = round(change * 100.00);

while (cents >= 25)
{
  quarters = cents/25;
  totalcoins += quarters;
  cents -=(quarters * 25);
}
while (cents >= 10)
{
    dimes = cents/10;
    totalcoins += dimes;
    cents -= (dimes * 10);
}
while (cents >= 5)
{
    nickels = cents/5;
    totalcoins += nickels;
    cents -= (nickels * 5);
}
while (cents >= 1)
{
    pennies = cents/1;
    totalcoins += pennies;
    cents -= (pennies * 1);
}
printf("%i\n", totalcoins);
}