#include <stdio.h>
#include <stdlib.h>

/* Size of the buffer for received data*/
#define BUFLEN  800

/*********************************************************************
*
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
  

  snprintf((char *) u8MsgBuff, sizeof(u8MsgBuff), "\r\n%s %s %s %d \r\n%s \r\n",pName,copyRight,companyNameplt,u16Year,version);

  printf(u8MsgBuff);

}

/*************************** End of file ****************************/
