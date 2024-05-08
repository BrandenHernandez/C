// Mario Bro. question bank
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for a positive number
    int n;
    do
    {
        n = get_int("Positive Number: ");
    }
    while (n <= 0);

    // Print n number of bricks
    for (int i = 0; i < n; i++)
    {
        printf("#\n");
    }
// Thanks for looking
}
