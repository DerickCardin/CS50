#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int space;
    int hash;
    int row;

    do
    {
//GET HEIGHT OF PYRAMID WHILE BETWEEN THE NUMBER 0-23
        height = get_int("Height: ");
    }

    while (height < 0 ||  height > 23);

    for (row = 0; row < height; row++)
    {
        //ADDING SPACES BASED OFF OF TOTAL HEIGHT - 1
        for (space = 1; space <= height - 1 - row; space++)
        {
            printf(" ");
        }
//PRINTING HASHES PER ROW
        for (hash = 0; hash < row + 2; hash++)
        {
            printf("#");
        }
//PRINT NEW LINE
        printf("\n");
    }
}