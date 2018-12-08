#include <cs50.h>
#include <stdio.h>


int main(void)
{
    float num = get_int("Numerator: ");
    float denum = get_int("Denominator: ");
    float result = num / denum;
    printf("Result: %f\n", result);


}


