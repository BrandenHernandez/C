#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // get user input
    string s = get_string("input: ");
    // Print user input
    printf("output: ");
    // in special format
    for (int i = 0; i < strlen(s); i++)
    {
        printf("\n%c", s[i]);
    }
    // New line
    printf("\n");
// Thanks for looking
}
