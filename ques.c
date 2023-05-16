#include<stdio.h>
#include<string.h>
int main(){
     char string_1[44];
     char string_2[44];
 char c ;
 int i= 0;
     printf("enter the first string is :\n");
    scanf("%s",string_1);

printf("enter the value of second string character by character \n");

 while ( c!= '\n')
 {
    fflush(stdin);
    scanf("%c",&c);
    string_2[i]= c;
    i++ ;

 }
 string_2[i-1]='\0';
 printf("the value of string_1 is %s\n",string_1);
 printf("the value of string_2 is %s\n",string_2);

 int value =strcmp(string_1,string_2);
 printf("the value of value is %d\n",value);
    return 0;
}