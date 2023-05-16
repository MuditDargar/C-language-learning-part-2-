#include<stdio.h>
void printaddress(int a){
    printf("the address of the variable a is %u\n",&a);
}
int main(){
    int i=4;
printf("the value  of i is %d \n",i);
printaddress(i);// so idher dusra address hoga
// idher se void function mae i ki copy pass hogi 
 // this is 1st address
printf("the addresss of of  of i is %u \n",&i);// idher original i hoga so idher alag address hoga 
// this is same address
// but the value is the differant
    return 0;
}