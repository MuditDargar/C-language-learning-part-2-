#include<stdio.h>
int main(){
    int arr[10];
  //  int *ptr=&arr[0];
    int *ptr=arr;
    ptr=ptr+2 ;
    if (ptr=&arr[2])
    {
        printf("these point to the same location address\n");
    }
    else{
        printf("not in the same location address"); 
    }
    return 0;
}