#ifndef _BUILTINFUNCTIONS_C_INCLUDED_

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

bool checkCD(char** args);
bool checkHelp(char** args);
bool checkExit(char** args);
int getBuiltInNums();

char *builtInChar[] = {
  "cd",
  "help",
  "exit"
};
bool (*builtInFunctions[]) (char **) = {
  &checkCD,
  &checkHelp,
  &checkExit
};

#include "builtInFunctions.c"
#define _BUILTINFUNCTIONS_C_INCLUDED_
#endif