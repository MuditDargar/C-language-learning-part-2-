#include <stdio.h>
int sum(int a, int b)
{
    int c;
    c = a + b;
    b = 3434;
    a = 23432;
    return c;
}
int main()
{
    int a, b;
a=35 ;
b=65 ;
// call by value mae function ki value wahi rahegi jo int  main() mae ho
    printf("the value of a and b is %d and %d \n", a, b);
    printf("the value of a+b is %d\n", sum(a, b));
    printf("the value of a and b  after call is %d and %d \n", a, b);
}