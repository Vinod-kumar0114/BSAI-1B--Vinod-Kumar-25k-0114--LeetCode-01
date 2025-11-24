
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of indices: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n;i++){
        printf("Enter num %d: ", i+1);
        scanf("%d", &arr[i]);
        
    }
    printf("\nGiven Array: [");
    for(int i=0;i<n;i++){
        printf("%d,", arr[i]);
    }
    printf("]\n");
    
   for(int i=0;i<=n-1;i++){
       for(int j=i+1;j<n;j++){
           if(arr[i]>arr[j]){
               int temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }
//    for(int i=0;i<n;i++){
//         printf("%d, ", arr[i]);
//     }
    int brr[n];
    for(int i=0;i<=n-1;i++){
       for(int j=i+1;j<n;j++){
          if(arr[i]==arr[j]){
              brr[j]=arr[j];
          }
       }
   }
   int count=0;
   printf("Transformed Array: [");
   for(int i=0;i<=n-1;i++){
       if(arr[i]!=brr[i]){
           printf("%d,", arr[i]);
       } else{
           count++;
       }
   }
   for(int i=0;i<count;i++){
       printf("_,");
   }
   printf("\b]");
    
    return 0;
}
