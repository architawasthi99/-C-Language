#include<stdio.h>
int main()
{
    
    int n;
    int count =0;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("THE GIDITS OF THE GIVVEN NUMBER IS %d",count);
    return 0;
}
