#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the element %d\n  : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
return 0;
}
