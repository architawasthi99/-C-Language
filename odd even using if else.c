#include <stdio.h>

int main()
{
    int n;
    printf("enter the positive value : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("the number %d is even",n);
        
    }
    else
    {
        printf("number is odd");
    }
}
