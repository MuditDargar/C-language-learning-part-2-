#include<stdio.h>
void print(int *arr,int num,int n){
    for (int i = 0; i < n; i++)
    {
    arr[i]=num*(i+1);
    printf("the table of %dx%d is :%d\n",num,i+1,arr[i]);
    }
    
}
int main(){
    // int m, n;
    // printf("enter the value of m and n:-\t");
    // scanf(" %d ,%d",&m,&n);
    int arr[5][5];
    print(arr[0],2,10);
    return 0;

}