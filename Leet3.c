#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of indices: ");
    scanf("%d", &n);
    int nums[n];

    for (int i = 0; i < n; i++)
    {
        printf("Index %d: ", i);
        scanf("%d", &nums[i]);
    }
    printf("\nInput: [");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", nums[i]);
    }
    printf("\b\b]");

    printf("\nOutput: [");
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0)
        {
            nums[i] = 0;
            printf("%d, ", nums[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 != 0)
        {
            nums[i] = 1;
            printf("%d, ", nums[i]);
        }
    }
    printf("\b\b]");
    return 0;
}