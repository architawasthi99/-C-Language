#include<stdio.h>
#include<string.h>
#define S 80
void main(){
    char n1[S],n2[S];
    int res;
    printf("enter any text ");
    scanf("%s",n1);
    strcpy(n2,n1);
    strrev(n2);
    res=strcmp(n1,n2);
    if(res==0)
    printf("text is palindrome");
    else
    printf("not palindrome");
}
