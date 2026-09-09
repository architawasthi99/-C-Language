1  5       output
2  4
3  3
4  2
5  1

#include<stdio.h>
int main(){
    int arr[100],brr[100],n,i;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the elements : ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        brr[n-i-1]=arr[i];
    }
    for(i=0;i<n;i++){
        printf("%d  %d\n",arr[i],brr[i]); 
    }
    return 0;
}
