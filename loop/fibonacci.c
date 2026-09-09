#include<stdio.h>
int main()
{
    int sum,n;
    printf("enter the number");
    scanf("%d",&n);
    int n1=0;
    int n2=1;
    printf("%d\n%d\n",n1,n2);
    for(int i=2;i<=n;i++)
    {
        sum=n1+n2;
        printf("%d\n",sum);
        n1=n2;
        n2=sum;
    }
    return 0;
}
