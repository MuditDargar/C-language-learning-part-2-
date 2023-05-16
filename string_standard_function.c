#include <stdio.h>
#include<string.h>
int main()
{
    char *str = "Mudit dargar";
    int a = strlen(str);
    printf("the length of string is %d\n", a);
    // using the strlen() ,strlen() count the no. of characters excluding the null character

// ****************************************************************************
     char *st_r ="this";
     char ch[45];
     // using the strcpy se string copy ho jaati hai, jese iss case mae ch mae cpoy ho jayegi st_r ki
    strcpy(ch,st_r);
     printf(" now the ch is %s\n",ch);

// *************************************************************************
     char sa[]= "sidhu";
     char san[]="moosewala";

     strcat(sa,san);
     // strcat is use for concatenate the twostring and the value asssign to first one .. and space not copy
     printf("the %s is the best punjabi singer \n",sa);

// ****************************************************************************************************************
  char a1[]="array ";
  char a2[]="harry" ;
  int value = strcmp(a1,a2);
  // return 0 if both string is same and if first string's is mismatching then print ASCII value of first - second and if first matching then give +ve value
  printf("now the value is %d",value);
    return 0;
}