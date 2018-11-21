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
printf("%i\n", height);
}