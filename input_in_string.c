#include<stdio.h>
int main(){
    char s[34];
    printf("Enter your name :");
    scanf("%s",s);
    printf("your name is %s",s);
    // Multiword string is not print so we use ,gets() and puts() use.
    return 0;
}