#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    float t;;
    printf("enter the marks of maths");
    scanf("%d",&a);
    printf("\nenter the marks of bio");
    scanf("%d",&b);
    printf("\nenter the marks of phy");
    scanf("%d",&c);
    printf("\nenter the marks of che");
    scanf("%d",&d);
    printf("\nenter the marks of hindi");
    scanf("%d",&e);
    t=(a+b+c+d+e)/5;
    printf("\nntotal percentage is%f",t);;

    return 0;
}
