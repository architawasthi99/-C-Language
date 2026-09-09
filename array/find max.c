#include<stdio.h>
int main(){
    long int n,arr[100],max,i;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the elements : ");
        scanf("%d",&arr[i]);
    }
      max=arr[0];
    for(i=0;i<n;i++){
         if(max<arr[i])
         max=arr[i];
         }
    
    printf("\nmax of the array is %d",max);
    return 0;
}
