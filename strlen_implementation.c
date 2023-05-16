#include<stdio.h>

int strlen(char *str){
    char *ptr=str ;
    int len =0;
    while (*ptr != '\0')
    {
       len++ ;
       ptr++ ;
    }
    return len ;
}
int main(){

    char str[] = "mudit is fabulous";
int l = strlen(str);
printf("the length of string is %d",l);
    return 0;
}