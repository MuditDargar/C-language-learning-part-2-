#include<stdio.h>
int main(){
    int marks[4] ;//allocate space for  4 integers
    printf("enter of marks for students1");
    scanf("%d" ,&marks[0]);
    printf("enter of marks for students2");
    scanf("%d" ,&marks[1]);
    printf("enter of marks for students3");
    scanf("%d" ,&marks[2]);
    printf("enter of marks for students4");
    scanf("%d" ,&marks[3]);
    printf("you have entered %d\n %d\n %d\n and %d\n",marks[0],marks[1],marks[2],marks[3]);
    return 0;
}