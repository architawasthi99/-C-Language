#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum of %d natural number is %d",n,sum);
    return 0;
    
}
