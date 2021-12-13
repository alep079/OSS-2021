#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid;
  int i = 0;
  for (i = 0; i < 1000; ++i) {
         pid = fork();
         if (pid>0) {continue;}
         else if (pid==0) {break;}
  }
  sleep(30);
  return 0;
}

