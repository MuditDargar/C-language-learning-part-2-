#include<stdio.h>
void decrypt(char *c){
char *ptr =c ;
while (*ptr !='\0')
{
    *ptr=*ptr-1 ;
ptr ++  ;
}

}
int main(){
    char c[]= "Nveju!jt!gbcvmpvt!cpz";
    decrypt(c);
    printf("the decrpypted string is:: %s",c);
    return 0;
}