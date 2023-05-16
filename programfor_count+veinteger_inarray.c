#include<stdio.h>
int main(){
    int arr[10]={4,8,-2,-3,-1,-9,6,5,-1,0} ;
    for (int i = 0; i <10; i++)
    {
        if(arr[i]>0){
            printf("the postive numberin which place :%d\n",i+1);
        }
        else if(arr[i]==0){
            printf("the value of 0 at which place %d\n",i+1);
        }
        else{
            printf("the negative value of at which place %d\n",i+1);
        }
    }
    
    return 0;
}