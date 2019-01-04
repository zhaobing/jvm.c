#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include "common.h"

typedef struct classpath
{

} ClassPath;

typedef ClassPath *clazzpath;

static clazzpath initClassPath()
{
    clazzpath path = (clazzpath)malloc(sizeof(struct classpath));
    return path;
}

//Parse 从参数中解析ClassPath
clazzpath parseClassPath(char *jreOption, char *cpOption)
{

    clazzpath path = initClassPath();

    //cp.parseBootAndExtClasspath(jreOption)
    //cp.parseUserClasspath(cpOption) return cp
}