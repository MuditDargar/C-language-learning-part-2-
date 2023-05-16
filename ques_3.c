#include<stdio.h>
// solve by call by referance
void tentimes(int *a ){
    int b=*a ;
int temp=b*10 ;

    printf("the value of new a is %d\n",temp);

}
int main(){
    int a =12;
    
    tentimes(&a);
    return 0;
}