#include <stdio.h>
//#include <encrypt.h>
//#include <checksum.h>
#include "encrypt.h"
#include "checksum.h"

int main()
{
  char s[] = "Say, friend, enter";
  encrypt(s);
  printf("Encrypted message: '%s'\n", s);
  printf("Checksum is: '%u'\n", checksum(s));
  encrypt(s);
  printf("Encrypted message: '%s'\n", s);
  printf("Checksum is: '%u'\n", checksum(s));
  return 0;
}