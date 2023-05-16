#include<stdio.h>
int main(){
        char str[]={'H','O','M','E' ,'E','\0'};
   // char str[]="Mudit" ;
    char *ptr=str ;
    while (*ptr !='\0')
    {
    printf("%c\t",*ptr);
    ptr++ ;
    }
    
    return 0;
}