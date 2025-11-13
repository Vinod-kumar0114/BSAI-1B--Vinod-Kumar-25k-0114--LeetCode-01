#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of indices: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            printf("Index %d: ", i);
            scanf("%d", &a[i]);
        }
        printf("\nInput: [");
        for (int i = 0; i < n; i++)
        {
            printf("%d, ", a[i]);
        }
        printf("\b\b]");
        printf("\nOutput: [");
        for (int i = 0; i < n / 2; i++)
        {
            printf("%d, ", a[i]);
            printf("%d, ", a[n / 2 + i]);
        }
        printf("\b\b]");
    }
    else
    {
        printf("Enter even number of indices.");
    }
    return 0;
}