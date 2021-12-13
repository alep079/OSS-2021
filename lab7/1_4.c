#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[]) {
 int num = 0;
 int N;
 char **p; 
 sscanf (argv[1],"%d", &N);
 p = environ;
 while ((*p != NULL) & (num<N)) {
	 num++;
	 printf("%d %s\n",num, *p);
 	 p++;
 }
}
                                   
