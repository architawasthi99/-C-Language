#include<stdio.h>

int main() {
    int n1, n2, arr[100], brr[100], crr[100], i, j,k;
    
    printf("Enter the number of elements for 1st array: ");
    scanf("%d", &n1);
    
    for(i = 0; i < n1; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of elements for 2nd array: ");
    scanf("%d", &n2);
    
    for(j = 0; j < n2; j++) {
        printf("Enter element %d: ", j + 1);
        scanf("%d", &brr[j]);
    }
      for(i=k=0;i<n1;i++){
          for(j=0;j<n2;j++){
              if(arr[i]==brr[j]){
                  crr[k++]=arr[i];
                  break;
              }
          }
      }
      for(i=0;i<k;i++){
          printf("%d ",crr[i]);
      }
    return 0;
}
