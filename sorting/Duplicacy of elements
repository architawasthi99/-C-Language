#include<stdio.h>
int main(){
    int arr[50],n,i,j,flag=0;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("\n%d is the duplicate element",arr[i]);
                flag++;
            }
        }
    }
    if(flag==0){
        printf("no duplicate");
    }
  return 0;
}
