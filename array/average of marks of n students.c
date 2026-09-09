#include<stdio.h>
int main(){
    int arr[100],i,n,sum;
    float avg;
    printf("Enter The Number Of Elements : ");
    scanf("%d",&n);
    sum=0;
    for(i=0;i<n;i++){
        printf("Enter The Elements : ");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("Average is = %f",avg);
    return 0;
}
