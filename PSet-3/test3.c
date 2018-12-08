#include <cs50.h>
#include <stdio.h>

bool is_rest(string);

int main(void)
{
char* s = "No line break";

}
bool is_rest(string s)
{
   if (s[0] == 0)
   {
       return true;
       printf("true");
   }
   else
   {
       return false;
       printf("False");
   }// TODO check if there is a line break or .\n or .\r and if so return true if not return false
}