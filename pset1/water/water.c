#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
    int k;

    do
    {
        n = get_int("Minutes: ");
        k = n * 12;
        printf("Bottles: %i\n", k );
    }
    while (n > 0);
}
