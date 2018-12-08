#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "A\nB\n";
}
bool is_rest(string s)
{
   if (s[0] == 0)
   {
       return true;
   }
   else
   {
       return false;
       printf("False");
   }// TODO check if there is a line break or .\n or .\r and if so return true if not return false
}