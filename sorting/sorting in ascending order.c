include<stdio.h>
int main(){
    int arr[50],n,i,j,temp=0;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<=n-1;i++){
            printf("%d ",arr[i]);
    }
    return 0;
}
