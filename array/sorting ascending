#include<stdio.h>
int main(){
    int arr[100],i,n,j,x;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the element %d ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
            }
            
        }
    }
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    return 0;
}
