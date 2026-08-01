#include <stdio.h>
#include<dirent.h>
#include <errno.h>

int main(int argc, char *argv[]){
    const char *path = (argc > 1) ? argv[1] : ".";
    
    DIR *dir = opendir(path);
    if (!dir){
        perror("opendir");
        return 1;
    }
    
    struct dirent *entry;
    entry = readdir(dir);

    printf("%s\n",entry -> d_name);

    return 0;
}
