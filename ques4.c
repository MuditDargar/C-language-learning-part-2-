#include<stdio.h>
void sumANDavg(int a,int b,int *sum ,float *avg){
     *sum=a+b ;
     *avg =(float)*sum/2 ;
}
// call by referance 

int main(){
    int i,j,sum ;
    float avg ;
    i=3 ;
    j=6 ;
    sumANDavg(i,j,&sum,&avg);
    printf("the value of sum is %d\n",sum);
    printf("the value of sum is %f\n",avg);
    return 0;
}