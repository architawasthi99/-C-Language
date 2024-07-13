#include<stdio.h>
#include<string.h>
int repeat(char []);
int main(){
    char s1[100];
    printf("enter the string : ");
    scanf("%s",s1);
    if(repeat(s1))
    printf("yes");
    else
    printf("no");
    return 0;
}
int repeat(char s1[]){
    int x=0,y=0;
    for(x=0;x<strlen(s1);x++){
        for(y=x+1;y<strlen(s1);y++){
            if(s1[x]==s1[y])
            return 1;
            }
        }
        return 0;
    }
