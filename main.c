#include "shell.h"

int main(){
    signal(SIGCHLD, log_handle);
    getJobDone();
    return 0;
}
