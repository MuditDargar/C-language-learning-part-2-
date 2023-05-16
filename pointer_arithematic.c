#include<stdio.h>
int main(){
    int i= 34 ;
 int *ptr=&i ;
 printf("the value of ptr is %u\n",ptr);
//  ptr++ ;
//  ptr++ ;
//  ptr++ ;
//  ptr-- ;
//  ptr-- ;
// integer 4 byte ka hota hai toh ptr +1  se 4 byte add ho jayega address mae
// as well as character 1 byte ka hota hai toh ptr +1  se 1 byte add ho jayega address mae
ptr =ptr+1 ;

 printf("the value of ptr is %u\n",ptr);
    return 0;
}