#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr1[30][30];
    int arr2[30][30];
    int mul[30][30];
    int i,j,k,r1,c1,r2,c2;
    printf("enter the order for matrix 1 :  ");
    scanf("%d%d",&r1,&c1);
    printf("enter the order  of 2nd matrix : ");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2){
        printf("wrong");
        exit(0);
    }
    printf("enter the elements of the matrix 1 :- \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter the elements of the matrix 2 :- \n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){
                mul[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("MULTIPLICATION :-\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
                printf("%d",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
