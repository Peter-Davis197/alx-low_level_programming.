#include <unistd.h>

/**
 * main - Prints a message to the standard error
 * Return: 1
 */
int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int length = 55;

    write(2, message, length);
    return 1;
}
