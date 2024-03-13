#include<stdio.h>
#include<string.h>

char string[]= "Hello C";
char array[7];

int main()
{
 int i;
 for (i=0;string[i]!=0;i++)
 {
   ;
 }
 for(int j=(i-1);j>=0;j--)
 { 
  int k=0;
  array[k]= string[j];
  printf("%c",array[k]);
  k++;  
 }
return 0;
}
