#include<stdio.h>
int main(){
    int a;
    scanf(" %d",&a);
  printf("the value of a is %d\n",a);
     printf("the value of address of a is %u\n",&a);
  
     printf("the value of  of a is %d\n",*(&a));

    return 0;
}