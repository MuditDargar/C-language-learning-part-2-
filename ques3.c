#include<stdio.h>
int valuechanged(int a){
    int b= a*10 ;
    printf("the value of a is %d\n",b);
}
int main(){
    // solved by call by value
    int a ;
    scanf("%d",&a);
valuechanged(a);
    return 0;
}