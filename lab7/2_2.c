#include <stdio.h>
#include <unistd.h>

int main(void)
{
  fork();
  sleep(3);
  return 0;
}

