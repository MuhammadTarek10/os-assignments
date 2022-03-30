#ifndef _BUILTINFUNCTIONS_C_INCLUDED_

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

bool checkCD(char** args);
bool checkExit(char** args);
int getBuiltInNums();

char *builtInChar[] = {
  "cd",
  "exit"
};
bool (*builtInFunctions[]) (char **) = {
  &checkCD,
  &checkExit
};

#include "builtInFunctions.c"
#define _BUILTINFUNCTIONS_C_INCLUDED_
#endif