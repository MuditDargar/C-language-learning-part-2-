#include<stdio.h>
#include<string.h>
struct employee
{
    int code ;
    float salary ;
    char name[20] ;
};

int main(){
     struct employee facebook[100] ;
     facebook[0].code =100 ;
facebook[0].code =1212.767 ;
strcpy(facebook[0].name,"mudit dargar") ;

     facebook[1].code =103 ;
facebook[1].code =112.767 ;
strcpy(facebook[1].name,"rohan gtr") ;

     facebook[73].code =102 ;
facebook[73].code =1112.767 ;
strcpy(facebook[73].name,"reels feels") ;

printf("the 73 is %s\n",facebook[73].name);
printf("the 1 is %s\n",facebook[1].name);
printf("the 0 is %s\n",facebook[0 ].name);

    return 0;
}