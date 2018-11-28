#include <cs50.h>
#include <stdio.h>

#define MAX16 9999999999999999
#define MIN16 1000000000000000

int main(void)
{
    long long ccnum = get_long_long("Number: ");
    printf("%lld\n", ccnum);
    if (ccnum >= MIN16 && ccnum <= MAX16)
}

//378282246310005