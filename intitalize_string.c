#include<stdio.h>
int main(){
    // first way to intitalixe tbe string
    char str[]={'H','O','M','E' ,'E','\0'};
    // second way to intialize the string
    char str_1[]="Mudit" ; // int this case C adds a null character automatically
// '\0' is the null character :show the string is end ;
for (int  i = 0; i < 5; i++)
{
    printf("%c",str[i]);  



}

    return 0;
}