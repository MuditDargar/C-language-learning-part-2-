#include<stdio.h>
int main(){
    int i=72 ;
    int *j = &i ;
    int *k = &j ;
    printf("the value of k is %d\n",*k);
    printf("the value of k is %d\n",*(&(i)));
    printf("the value of   is %d\n",*(&(j)));
    return 0;
} 