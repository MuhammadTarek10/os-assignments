bool checkCD(char** args){
    if(args[1] == NULL)
        fprintf(stderr, "Expected command after cd...\n");
    else{
        if(chdir(args[1]) != 0)
            perror("Error in Changing Directory...\n");
    }

    return true;
}

bool checkHelp(char** args){
    for(int i=0; i<getBuiltInNums(); ++i)
        printf("%s\n", builtInChar[i]);
    return true;
}

bool checkExit(char** args){
    return false;
}

int getBuiltInNums(){
    return sizeof(builtInChar) / sizeof(char*);
}