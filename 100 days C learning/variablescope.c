/* File    : main.c
Purpose : Generic application start
*/

#include <stdio.h>
#include <stdlib.h>

#include"file.h"

/* Size of the buffer for received data*/
#define BUFLEN  800

/*********************************************************************
*       main()
*
*  Function description
*   Application entry point.
*/



const static char pName[] = "EWG";
const static char copyRight[] = "(c)";
const static char companyNameplt[] = "AUMA";
const static unsigned int u16Year=2023;
const static char version[]= "V00.00";

char u8MsgBuff[BUFLEN];




int main(void) {
  int i[]={1,2,3};
  int j;
  char k;

 // companyNameplt[0] = 'P';
//  pName[0] = 'M';
  

  for (j = 0; j < 3; j++) {
    printf("Hello World %x!\n", (char)i[j]);
  }

 // function1();

  snprintf(u8MsgBuff, sizeof(u8MsgBuff), "\r\n%s %s %s %d \r\n%s \r\n",pName,copyRight,companyNameplt,u16Year,version);

  printf(u8MsgBuff);

}

/*************************** End of file ****************************/
