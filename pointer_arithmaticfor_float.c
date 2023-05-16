#include<stdio.h>
int main(){
    float  m =3.2 ;
    float *ptr =&m ;
    printf("the value of pointer is %u\n",ptr);
    ptr++;
    ptr=ptr+1 ;
     printf("the value of pointer is %u\n",ptr);

    return 0;
}