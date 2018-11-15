#include <stdio.h>
#include "p180encrypt.h"

int main()
{
  char msg[80];
  
  while(fgets(msg, 80, stdin))
  {
    encrypt(msg);
    printf("%s", msg);
  }
}