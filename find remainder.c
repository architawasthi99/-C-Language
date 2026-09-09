#include<stdio.h>
int main()
{
    int a,b,q,r;
    printf("enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    q=a/b;
    r=a-b*q;
    printf("your remainder is : %d",r);
    
    return 0;
}
