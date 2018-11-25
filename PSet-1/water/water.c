#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int minutes = get_int("Minutes: "); //Get Minutes from user
    printf("Bottles: %i\n", minutes * 12); //Take minutes and multiply by 12(bottles of water per minute)
}