#include<stdio.h>
void display(int *m ,int *n){
    int *y=3,*z=3 ;
    int t=*y ;
    int q=*z ;
    int marks[t][q];
    for (int  i = 0; i < t; i++)
    {
       for (int j= 0; j < q; j++)
       {
        printf("enter the value student%d and subject%d is: %d\n",i+1,j+1,marks[i][j]);
       
       }
       // isko thoda sahhi jkar naaa hai
    }
}
int main(){
    int m=3 ,n=3 ;
    int marks[3][3];
    for (int  i = 0; i < m; i++)
    {
       for (int j= 0; j < n; j++)
       {
        printf("enter the value student%d and subject%d is:\n",i+1,j+1);
        scanf("%d",&marks[i][j]);
       }
       
    }
    display(&m,&n);
    
    return 0;
}