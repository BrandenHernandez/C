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

    // Print n number of rows
    for (int i = 0; i < n; i++)
    {
        // Pront out this many colomns
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
// Thanks for looking
}
