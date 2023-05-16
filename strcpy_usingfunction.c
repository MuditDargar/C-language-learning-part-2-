#include<stdio.h>

int main(){
    char *s="geeksforgeeks";
    char s2[100],i ;
    printf("the string s is : %s\n",s);
    for ( i = 0; s[i]!='\0' ; ++i)
    {
       s2[i]=s[i] ;
    }
    s2[i]='\0';

    printf("the s2 string is :%s\n",s2);
    return 0;
}