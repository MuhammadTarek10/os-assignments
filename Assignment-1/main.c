#include "shell/shell.h"

int main(){
    signal(SIGCHLD, logHandle);
    getJobDone();
    return 0;
}
