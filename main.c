#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line) {
  char ** arrP = calloc(5, sizeof(char *));
  for(int i = 0; line; i++)
    arrP[i] = strsep(&line, " ");
  return arrP;
}

int main() {
  char line[10] = "ls -a -l";
  char ** args = parse_args(line);
  printf("Passed args: \n");
  int i = 0;
  while (args[i]) {
    printf("%s\n", args[i]);
    i++;
  }
  printf("Executing ls -a -l\n");
  execvp(args[0], args);
}
