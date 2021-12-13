#include <stdio.h>


// env | wc -l


extern char **environ;
int main(int argc, char *argv[]) {
  int num = 0;
  char **p;
  p = environ;
  while ((*p != NULL) & (num<10)) {
	num++;
 	printf("%d %s\n",num, *p);
	p++;
  }
}      
