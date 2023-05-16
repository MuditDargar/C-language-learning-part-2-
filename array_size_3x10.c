#include<stdio.h>
void printtable(int *arr,int num ,int n){
    printf("the multiple table of %d is:\n",num);
    for (int i = 0; i <n ; i++)
    {
    arr[i]=num*(i+1);
    printf("%dx%d=%d\n",num,i+1,arr[i]);
    }
    printf("***********************************\n\n");
}
int main(){
    int arr[3][10] ;
    // for (int i = 0; i <10 ; i++)
    // {
    // arr[0][i]=2*(i+1);
    // printf("2x%d=%d\n",i+1,arr[0][i]);
    // }
    // for (int i = 0; i <10 ; i++)
    // {
    // arr[0][i]=7*(i+1);
    // printf("7x%d=%d\n",i+1,arr[0][i]);
    // }
    // for (int i = 0; i <10 ; i++)
    // {
    // arr[0][i]=9*(i+1);
    // printf("9x%d=%d\n",i+1,arr[0][i]);
    // }
    printtable(arr[0],2,10);
    printtable(arr[1],11,10);
    printtable(arr[2],9,10);
    
    return 0;
}