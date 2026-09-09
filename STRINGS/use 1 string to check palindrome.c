#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int len,i,flag=0;
    printf("enter the text: ");
    scanf("%s",str);
    len=strlen(str);
     for(i=0;i<len/2;i++) {
        if(str[i]!=str[len-i-1]){
            flag=1;
            break;
            }
    }
    if (flag==0)
    printf("Palindrome");
    else
        printf("Not a palindrome");
    return 0;
}
