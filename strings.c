#include<stdio.h>
int main(int argc, char *argv[])
{
    char buffer[256];
    char input;
    int i = 0;
    printf("Number of arguments: %d\n", argc);
    for (int j = 0; j < argc; j++)
    {
        printf("Argument %d: %s\n", j, argv[j]);
    }
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