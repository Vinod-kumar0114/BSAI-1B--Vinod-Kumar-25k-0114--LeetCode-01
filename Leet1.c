#include <stdio.h>
int main(){
    int n;
    printf("Choose the number of indices: ");
    scanf("%d", &n);
    int nums[n], sum=0;
    for(int i=0; i<n;i++){
        printf("Index %d: ", i);
        scanf("%d", &nums[i]);
    }
    printf("Input: nums = [");
    for(int j=0;j<n;j++){
        printf("%d, ", nums[j]);
    }
    printf("\b\b]");
    printf("\nOutput: [");
    for(int j=0;j<n;j++){
        sum=sum+nums[j];
        printf("%d, ", sum);
    }
    printf("\b\b]");
    return 0;
}