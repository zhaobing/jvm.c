#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "common.h"
#include "cmd.h"

void usage(char *tip)
{
    fprintf(stderr, "%s\n", tip);
    printf("Usage:\n");
    printf("zvm -Xjre jrepath -cpOption classpath className\n");
}

int checkInputArgs(int argc, char *argv[])
{
    if (argv[1] == NULL || strcmp(argv[1], "-Xjre"))
    {
        usage("please input -Xjre");
        return -1;
    }

    if (argv[2] == NULL || strlen(argv[2]) == 0)
    {
        usage("please input -jrePath");
        return -2;
    }

    if (argv[3] == NULL || strcmp(argv[3], "-cpOption"))
    {
        usage("please input -cpOption");
        return -3;
    }

    if (argv[4] == NULL || strlen(argv[4]) == 0)
    {
        usage("please input -cpOption");
        return -4;
    }

    if (argv[5] == NULL || strlen(argv[argc - 1]) == 0)
    {
        usage("please input -className");
        return -5;
    }

    return true;
}

Cmd *initCmd(int argc, char *argv[])
{

    if (!checkInputArgs(argc, argv))
    {
        return NULL;
    }

    // * "args": ["-Xjre", "/usr/lib/jvm/jdk8-sun/jdk1.8.0_162/jre", "-cpOption", ".", "java.lang.Object"]
    Cmd *cmd = (struct Cmd *)malloc(sizeof(Cmd));
    cmd->jrePath = argv[2];
    cmd->classPath = argv[4];
    cmd->className = argv[5];
    replaceChar(cmd->className, '.', '/');
    cmd->print = print;
    return cmd;
}

void print(Cmd *this)
{

    printf("===cmd info start===\n");
    printf("jrePath=%s\nclassPath=%s\nclassName=%s\n", this->jrePath, this->classPath, this->className);
    printf("===cmd info end===\n");
}
