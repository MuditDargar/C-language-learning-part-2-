#include<stdio.h>
#include<string.h>
struct employee
{
    int code ;
    float salary ;
    char name[45];

};

int main(){
//  struct employee e1 ;
//  e1.code = 22212 ;
//  e1.salary = 121.121 ;
//  strcpy(e1.name,"Mudit Dargar");
//  printf("the name is %s\n",e1.name);
//  printf("the code is %d\n",e1.code);
//  printf("the code is %f\n",e1.salary);
struct employee Mudit ={100,12322.44,"Mudit Dargar"};
printf("the name is %s\n",Mudit.name);
printf("the code is %d\n",Mudit.code);
printf("the salary is %f\n",Mudit.salary);

    return 0;
}