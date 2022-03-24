#ifndef _BUILTINFUNCTIONS_C_INCLUDED_

#include <stdio.h>
#include <unistd.h>

int checkCD(char** args);
int checkHelp(char** args);
int checkExit(char** args);
int getBuiltInNums();

char *builtInChar[] = {
  "cd",
  "help",
  "exit"
};
int (*builtInFunctions[]) (char **) = {
  &checkCD,
  &checkHelp,
  &checkExit
};

#include "builtInFunctions.c"
#define _BUILTINFUNCTIONS_C_INCLUDED_
#endif