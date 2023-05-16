#include<stdio.h>
void wrongswap(int a,int b){
 int temp ;
 temp =a ;
 a=b ;
 b= temp ;
}
void swap(int *a,int *b){
int temp ;
 temp = *a ;
 *a= *b ;
 *b= temp ;

}
int main(){
    int x=3 ,y=4;
    printf("the value of  x and y before swap is %d and %d\n",x,y);
wrongswap(x,y);// will not work due to call by value
// idher call by value kar rhe ho toh value mae change nhi aayega function kaa
swap(&x,&y);// this is call by referance and this workkk..
    printf("the value of  x and y after swap is %d and %d\n",x,y);

 
    return 0;
}