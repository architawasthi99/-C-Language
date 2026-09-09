#include<stdio.h>
int main(){
    int arr1[50],arr2[50],i,n,j,count=0;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("enter the element %d : ",i+1);
    scanf("%d",&arr1[i]);
}
for(j=0;j<n;j++){
    printf("enter the elements for 2nd array : ");
    scanf("%d",&arr2[j]);
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(arr1[i]==arr2[j]){
        printf("%d\n",arr1[i]);
        }
    }
}
return 0;
}
