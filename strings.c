#include<stdio.h>
int main(void)
{
    char buffer[256];
    char input;
    int i = 0;

    printf("Please enter a sentence\n");

    while (1)
    {
        input = getchar();
        if (input = '\n')
        {
            buffer[i] = '\0';
            break;
        }
        buffer[i] = input;
        i++;
    }
}