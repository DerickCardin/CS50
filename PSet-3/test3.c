#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool is_rest(string);
int check;

int main(void)
{
string str1 = "No line break\n";
string str2 = "\n";
check = strcmp(str1, str2);
}
bool is_rest(string str1)
{
  if (check == 0)
  {
      printf("True");
      return true;

  }
  else
  {

      printf("False");
      return false;
  }// TODO check if there is a line break or .\n or .\r and if so return true if not return false
}