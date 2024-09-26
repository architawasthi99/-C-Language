#include<stdio.h>
int main(){
    int arr[50],n,i,j,target,flag=0;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the TARGET : ");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("THE NUMBER %d AND %d IS ADDED TO FORM THE TARGET %d",arr[i],arr[j],target);
                flag++;
            }
        }
    }
    if(flag==0){
        printf("THERE ARE NO ELEMENTS FOR THE REQUIRED TARGET");
    }
    return 0;
}
