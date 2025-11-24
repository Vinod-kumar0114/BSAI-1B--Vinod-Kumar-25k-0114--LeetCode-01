// #include<stdio.h>
// int main(){

//     int arr[5];
//     int a[5],b[5];
//     int non=0, zeros=0;

//     for(int i=0;i<5;i++){
//         printf("Num %d: ", i+1);
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<5;i++){
//         if(arr[i]!=0){
//             a[non]=arr[i];
//             non++;
//         }else{
//             b[zeros]=arr[i];
//             zeros++;
//         }
//     }
//     int temp;

//     for(int i=0;i<non-1;i++){
//         for(int j=i+1;j<non;j++){
//             if(a[i]>a[j]){
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     printf("[");
//     for(int i=0;i<non;i++){
//         printf("%d, ", a[i]);
//     }
//     for(int i=0;i<zeros;i++){
//         printf("%d, ", b[i]);
//     }
//     printf("\b\b]");
//     return 0;
// }

#include <stdio.h>
int main()
{

    int n;
    printf("Enter number of indices: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Num %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("[");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            printf("%d, ", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            printf("%d, ", arr[i]);
    }
    printf("\b\b]");
    return 0;
}