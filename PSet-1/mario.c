#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
do
{
    height = get_int("Height: ");

}
while (height <= 0 && height >= 23);
for (int space = height -1; space <= 23; space++)
{
    printf(" ");
}
for (int hash = 0; hash < height; hash++)
{
    printf("#");

}
}