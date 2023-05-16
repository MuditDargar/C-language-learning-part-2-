#include<stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    int mult[10];
    for (int i = 0; i <10; i++)
    {
       mult[i]=n*(i+1) ;
      printf("%dX%d =%d\n",n,i+1 ,mult[i]);
    }

    

    return 0;
}