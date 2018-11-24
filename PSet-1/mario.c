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
        height = get_int("Height: ");
    }

    while (height < 0 || height > 23);

    for (row = 0; row < height; row++)
    {
  for (space = 1; space <= height - 1 - row; space++)
        {
            printf(" ");
        }

        for (hash = 0; hash < row + 1; hash++)
        {
            printf("#");
        }

        printf("\n");
    }
}