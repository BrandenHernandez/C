// Floating-point arithemtic

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    float x = get_float("x: ");

    // Prompt user for y
    float y = get_float("y: ");

    // Perform arithemtic
    printf("%f divided by %f is %f\n", x, y, x / y);

    // Thanks for looking
}
