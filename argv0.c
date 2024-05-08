// printing a command-line argument

#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        // if name is entered on command-line directly after "./argv0 "
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
// Thanks for looking
}
