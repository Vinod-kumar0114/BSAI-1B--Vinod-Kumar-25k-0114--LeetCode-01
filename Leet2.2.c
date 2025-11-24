#include <stdio.h>
int main()
{
    char str[5][2] = {"H", "e", "l", "l", "o"};

    printf("Given Array: [");
    for (int i = 0; i <= 4; i++)
    {
        printf("\"%c\", ", str[i][0]);
    }
    printf("\b\b]");
    printf("\nTransformed array: [");
    for (int i = 4; i >= 0; i--)
    {
        printf("\"%c\", ", str[i][0]);
    }
    printf("\b\b]");
    return 0;
}