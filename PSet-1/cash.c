#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int change;
do
{
  change = get_int("Change: ");
}
while ( change < 0);
}