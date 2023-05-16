#include<stdio.h>
#include<string.h>
struct employee
{
   int code ;
   float salary ;
   char name [20];
};

int main(){
 struct employee e1,e2,e3 ;
 printf("enter the value for code e1: ");
 scanf("%d",&e1.code );
 printf("enter the value for salary e1: ");
 scanf("%f",&e1.salary );
 printf("enter the value for name e1: ");
 scanf("%s",e1.name );


 printf("enter the value for code e2 : ");
 scanf("%d",&e2.code );
 printf("enter the value for salary e2: ");
 scanf("%f",&e2.salary );
 printf("enter the value for name e2: ");
 scanf("%s",e2.name );


 printf("enter the value for code e3: ");
 scanf("%d",&e3.code );
 printf("enter the value for salary e3: ");
 scanf("%f",&e3.salary );
 printf("enter the value for name e3: ");
 scanf("%s",e3.name );

// printf("the value of code for e1 is %d\n",e1.code);
// printf("the value of salary for e1 %f\n",e1.salary);
// printf("the value of name for e1 is %s\n",e1.name);

// printf("the value of code for e2 is %d\n",e2.code);
// printf("the value of salary for e2 %f\n",e2.salary);
// printf("the value of name for e2 is %s\n",e2.name);

// printf("the value of code for e3 is %d\n",e3.code);
// printf("the value of salary for e3 %f\n",e3.salary);
// printf("the value of name for e1 is %s\n",e3.name);


    return 0;
}