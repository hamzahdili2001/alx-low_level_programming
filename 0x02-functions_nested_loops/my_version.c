
#include <stdio.h>

#define MODULO 1000000000

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
    int c;
    long int previousFibonacci = 1, currentFibonacci = 2, nextFibonacci;

    printf("%ld, %ld", previousFibonacci, currentFibonacci);
    for (c = 0; c < 96; c++)
    {
        if (currentFibonacci < 0)
        {
            break;
        }

        if (currentFibonacci < MODULO)
        {
            nextFibonacci = previousFibonacci + currentFibonacci;
            printf(", %ld", nextFibonacci);
            previousFibonacci = currentFibonacci;
            currentFibonacci = nextFibonacci;
        }
        else
        {
            long int carry = (previousFibonacci + currentFibonacci) / MODULO;
            long int nextLowerPart = (previousFibonacci + currentFibonacci) % MODULO;
            nextFibonacci = currentFibonacci + carry;
            printf(", %ld%09ld", nextFibonacci, nextLowerPart);
            previousFibonacci = currentFibonacci;
            currentFibonacci = nextFibonacci;
        }
    }
    printf("\n");
    return 0;
}
