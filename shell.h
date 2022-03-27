#ifndef _SHELL_C_INCLUDED_
#include "builtInFunctions.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <signal.h>

#define TOKEN_BUFFER_SIZE 64
#define TOKEN_DELIMTER " \t\r\n\a"

void getJobDone();
char* readLine();
char** readArgs(char* line);
bool launchShell(char** args);
bool executeShell(char** args);
void log_handle(int sig);	

#include "shell.c"
#define  _SHELL_C_INCLUDED_
#endif