#include<stdio.h>
#include<string.h>

char string1[]= "Hello";
char string2[]= "Programmer";

char string3[20];

int main()
{
 int size;

 size = strlen(string1);
 printf("length is %d\n",size);

 strcpy(string3, string1);
 printf("String3 contents is : %s\n",string3);

 if (strncmp(string1,string3,5) ==0)
  printf("Strings 1 and 3 match\n");
 else
  printf("Strings 1 and 3 no match\n");

 return 0;
}
