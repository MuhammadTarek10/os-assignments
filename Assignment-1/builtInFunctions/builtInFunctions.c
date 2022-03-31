bool checkCD(char** args){
    //dealing with cd
    if(args[1] == NULL)
        fprintf(stderr, "Expected command after cd...\n");
    else{
        if(chdir(args[1]) != 0)
            perror("Error in Changing Directory...\n");
    }

    return true;
}

bool checkHelp(char** args){//dealing with help
    printf("***welcom to help***\nlist of commands supported:\n>cd\n>ls\n>exit\n>all other general commands available in UNIX shell\n>improper space handling\n");
    return true;
}

bool checkExit(char** args){//dealing with exit
    return false;
}

int getBuiltInNums(){
    return sizeof(builtInChar) / sizeof(char*);
}



