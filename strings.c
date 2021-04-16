#include<stdio.h>
int main(void)
{
    char buffer[256];
    char input;
    int i = 0;

    printf("Please enter a sentence:");

    while ((input = getchar()) != '\n')
    {
        buffer[i] = input;
        i++;
    }
    buffer[i] = '\0';
    printf("You entered: %s\n", buffer);
    return 0;
}