// Count number of letters from input
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("name: ");
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
// Thanks for looking
}
