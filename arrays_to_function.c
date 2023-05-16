#include<stdio.h>
// void printarray(int *ptr ,int n){
//     for (int i = 0; i < n; i++)
//     {
// printf("the value of element %d is %d\n ",i+1,*(ptr+i));
//     }
    
// }
void printarray(int ptr[] ,int n){
    for (int i = 0; i < n; i++)
    {
        printf("the value of element is %d is %d\n",i+1 ,ptr[i]);
    }
    ptr[2]=5555;//this value will be changes in aarr array  main as well
    
}
int main(){
    int arr[]={1,3,45,65,56,55,34,87};
    printarray(arr,8);
    printf("%d",arr[2]);
    return 0;
}