// Integer overflow
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // Iteractively double i
    for (int i = 1; ; i *=2)
    {
        printf("%i\n", i);
        sleep(1);
    }
// Thanks for looking
}
