#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define SIZE 100

// char* getCommands

int main(){
    int pid = fork();
    char input[SIZE];
    if (pid == 0){
        printf("Child\n");
        gets(input);
    }
    else{
        wait(NULL);
        printf("Parent\n");
    }
    return 0;
}
