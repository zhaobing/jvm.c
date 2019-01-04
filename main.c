#include <stdio.h>
#include "common.h"
#include "cmd.h"

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
    cmd->print(cmd);
    debug();
    return 0;
}
