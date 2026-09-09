#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        sum=sum-i;
        else
        sum=sum+i;
    }
    printf("sum of series is %d",sum);
    return 0;
}
