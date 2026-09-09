// USING FOR LOOP :- 

#include<stdio.h>
int main()
{
    int n;
    int fact=1;
  printf("enter the number");
  scanf("%d",&n);
  for(int i =1;i<=n;i++)

    {
        fact=fact*i;
    }
    printf("factorial of the given number is %d",fact);
    return 0;
}

// USING WHILE LOOP :-
#include<stdio.h>
int main()
{
    int n,i=1;
    int fact=1;
  printf("enter the number");
  scanf("%d",&n);
   while(i<=n)
   {
       fact=fact*i;
       i++;
   }
    printf("factorial of the given number is %d",fact);
    return 0;
}
