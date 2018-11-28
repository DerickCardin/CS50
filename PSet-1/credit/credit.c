#include <cs50.h>
#include <stdio.h>

#define MAX16 5599999999999999
#define MIN16 1000000000000000

#define MAX15 379999999999999
#define MIN15 340000000000000

#define MAX13 4999999999999
#define MIN13 4000000000000

int main(void)
{
    long long ccnum = get_long_long("Number: ");
    int length = 0;
    printf("%lld\n", ccnum);

    if (ccnum >= MIN16 && ccnum <= MAX16)
    {
        printf("card may be Visa or Mastercard\n");
        length = 16;
    }
    else if (ccnum >= MIN15 && ccnum <= MAX15)
    {
        printf("card may be an AMEX\n");
        length = 15;
    }
    else if (ccnum >= MIN13 && ccnum <= MAX13)
    {
        printf("card may be a Visa\n");
        length = 13;
    }
    else
    {
    printf("INVALID\n");
    return 0;
    }
    int timesTwo = 0;
    int noTimes = 0;
    int final = 0;
}

//378282246310005