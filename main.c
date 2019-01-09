#include <stdio.h>
#include "common.h"
#include "cmd.h"

int startJVM(Cmd *cmd);

void debug()
{
    sprint("debug....");
}

int main(int argc, char *args[])
{
    printf("zvm...\n");

    Cmd *cmd = initCmd(argc, args);
    if (cmd == NULL)
    {
        return -1;
    }
    else
    {
        startJVM(cmd);
    }
    debug();
    return 0;
}

int startJVM(Cmd *cmd)
{
    cmd->print(cmd);
}
