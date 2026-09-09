#include<stdio.h>
int main(){
    int n,arr[100],pro,i;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the elements : ");
        scanf("%d",&arr[i]);
    }
      pro=1;
    for(i=0;i<n;i++){
        pro=pro*arr[i];
    }
    printf("\nproduct of the array is %d",pro);
    return 0;
