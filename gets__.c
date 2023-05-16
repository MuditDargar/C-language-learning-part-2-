#include<stdio.h>
int main(){

    // gets() is a function which can be used to receive a multi-word string.
    // puts() is a funtion which can be used to print  a multi-word  string .
    char s[45];
    printf("enter your name:");
    gets(s);
    puts(s);
   // printf("your name is %s",s);
    return 0;
}