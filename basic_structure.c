#include<stdio.h>
#include<string.h>
struct employee
{
     int code ;
     float salary ;
     char name[15] ;
};

int main(){
    int a =34 ;
    float b= 34.44 ;
    char ch ='d' ;
    // employee e1 ;--> won't work without structures
    // e1.salary =3500000; -->  won't work without structures


// e1 ka data store ho jaayeega
    struct employee e1 ;
    e1.code = 12131 ;
    e1.salary = 320000.32 ;
  //  e1.name= "Mudit" ; -->won't work
  strcpy(e1.name,"Mudit Dargar");

printf("%d\n",e1.code);
printf("%s\n",e1.name);
printf("%f",e1.salary);
    
    return 0;
}