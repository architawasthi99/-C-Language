#include<stdio.h>
int main()
{
    int n,a,b,q;
    printf("enter the selling price : ");
    printf("\nemter the buying price : ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        n=(a-b);
        printf("Seller has done a profit of %d",n);
    }
    else
    {
    q=(b-a);
    printf("\nSeller has done a loss of %d",q);
    }
    return 0;
    
    
}
