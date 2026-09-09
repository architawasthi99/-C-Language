#include<stdio.h>
int main(){
    int arr[100],n,i,j,x;
    printf("enter the number : ");
    scanf("%d",&n);
    i=0;
    while(i<n){
        printf("enter the elements %d: ",i+1);
        scanf("%d",&arr[i]);
        i++;
    }
    i=0;
    while(i<n){
        j=i+1;
        while(j<n){
            if(arr[i]>arr[j]){
                x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
               
            }
             j++;
        }
        i++;
    }
    i=0;
    while(i<n){
        printf("%d ",arr[i]);
        i++;
    }
    return 0;
}
