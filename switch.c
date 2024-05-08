// switch

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt user for answer
    char c = get_char("Answer: ");

    // check answer
    switch (c)
    {
        case 'Y':
        case 'y':
            printf("yes\n");
            break;
        case 'N':
        case 'n':
            printf("no\n");
            break;
    }
// Thanks for looking
}
