#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid = fork();
  if (pid==0) { printf("Это сообщение из дочернего процесса, его pid: %d, pid родительского процесса: %d.\n", getpid(), getppid()); }
  else if (pid>0) { printf("Это сообщение из родительского процесса.\n"); }
  return 0;
}

