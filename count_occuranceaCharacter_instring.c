#include<stdio.h>
int occurance(char str[], char c){
    char *ptr= str ;
    int count =0 ;
    while (*ptr !='\0')
    {
        if (*ptr==c)
        {
            count ++ ;
        }
        ptr++ ;
    }
    return count ;
}
int main(){
    char str []="assassination";
   int count = occurance(str,'s');
   printf("the occurance of s is %d\n",count);
    return 0;
}