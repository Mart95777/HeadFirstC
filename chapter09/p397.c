#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* now()
{
  time_t t;
  
  time(&t);
  return asctime(localtime(&t));
}

void copy_except_char(char * src, char * dest, char c, int size)
{
  for(int i =0; i < size; i++)
  {
    if(src[i] != c)
    {
      dest[i] = src[i];
    }
    else
    {
      dest[i] = ' ';  
    }
  }
}

int main()
{
  char comment[80];
  char cmd[120];
  char corrected_cmd[120];
  
  fgets(comment,80,stdin);
  char * current_time = now();
  sprintf(cmd,"echo '%s %s' >> reports.txt",comment, current_time);
  copy_except_char(cmd,corrected_cmd,'\n',120);
  printf("corrected command: %s\n",corrected_cmd);
  
  system(corrected_cmd);
  return 0;
}