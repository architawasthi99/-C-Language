#include<stdio.h>
int main()
{
    int n,sum=0,lastdigit;
    printf("enter the number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        lastdigit=n%10;
        if(lastdigit%2==0)
        {
           sum=sum+lastdigit;
           
        }
        n=n/10;
    }
    printf("THE SUM OF EVEN DIGITS OF THE GIVEN NUMBER IS: %d",sum);
    return 0;
}
