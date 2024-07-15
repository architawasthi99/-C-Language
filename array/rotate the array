#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[100],n,i,x;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the elements %d ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    for(i=0;i<=n/2;i++){
        x=arr[i];
        arr[i]=arr[n/2+i];
        arr[n/2+i]=x;
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
   return 0;
}
