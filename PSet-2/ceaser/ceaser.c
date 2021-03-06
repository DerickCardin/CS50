//PSUEDO-CODE
//Get key from command line argument
//turn key into integer
//prompt for plain text
// for each character in the plain text string
//if alphabetic
//preserve case
//shift plain text by key
//print cypher text

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
  if (argc != 2)
  {
     printf("Try Again\n");
     return 1;
   }
int k = atoi(argv[1]);
    if (k < 0)
  {
     printf("Try Again\n");
     return 1;
  }
  else
  {
    string plainText = get_string("plaintext: ");
    printf("ciphertext: ");

  for (int i = 0, n = strlen(plainText); i < n; i++)
  {
     if islower(plainText[i])
    {
       printf("%c", (((plainText[i] + k) - 97) % 26) + 97);
    }

    else if isupper(plainText[i])
    {
       printf("%c", (((plainText[i] + k) - 65) % 26) + 65);
    }

    else
    {
        printf("%c", plainText[i]);
    }
  }
    printf("\n");
    return 0;
  }
}