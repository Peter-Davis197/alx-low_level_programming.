#include <stdio.h>

/**
 * main - Points the size of computer types
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
    char a;
    int b;
    long int c;
    long long int d;
    float e;

    printf("Size of a char: %zu byte(s)\n", sizeof(char));
    printf("Size of an int: %zu byte(s)\n", sizeof(int));
    printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
    printf("Size of a float: %zu byte(s)\n", sizeof(float));

    return (0);
}
