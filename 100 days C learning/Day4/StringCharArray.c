#include<stdio.h>
#include<string.h>

char string1[]= "Hello";
char array[5] ={'H','E','L','L','O'};

int main()
{
  printf("string is %s\n",&string1[0]);
 
  printf("Array:\n");
  for (int i=0;i<=4;i++)
  {
   printf("%x\n",&array[i]);
  // printf("\n");
  }
  printf("\n");

 return 0;
}
