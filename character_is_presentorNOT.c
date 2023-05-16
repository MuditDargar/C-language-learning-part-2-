#include<stdio.h>
int characterpresent(char str[],char n){
    char *ptr =str ;
         while (*ptr != '\0')
         {
          if( *ptr == n){
            return 1;
          }
          ptr++ ;
         }
        
}
int main(){
    char str[]="assassination";
  int count =  characterpresent(str,'z');
    printf("the z is present %d",count);
    return 0;
}