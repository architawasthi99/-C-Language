#include<stdio.h>
#define s1 7
#define s2 5

int main(){
    int arr[s1],brr[s2],crr[s1+s2],i,j;
    printf("ENTER ELEMENTS OF 1ST ARRAY : \n");
    for(i=0;i<s1;i++){
         printf("enter the element %d =",i+1);
         scanf("%d",&arr[i]);
    }
    printf("ENTER ELEMENTS OF 2ND ARRAY : \n");
    for(j=0;j<s2;j++){
        printf("enter the elemet %d =",j+1);
        scanf("%d",&brr[j]);
    }
    for(i=0; i<s1 && i<s2; i++){
        crr[i]=arr[i];
        crr[s1+i]=brr[i];
    }
    for(;i<s1;i++) crr[i]=arr[i];
    for(;i<s2;i++) crr[s1+i]=brr[i];
    for(i=0;i<(s1+s2);i++){
        printf("%d ",crr[i]);
    }
     return 0;
}
