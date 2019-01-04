
#ifndef __CMD__H__
#define __CMD__H__

#endif

typedef struct Cmd
{
    char *jrePath;
    char *classPath;
    char *className;
    void (*print)(struct Cmd *this);
} Cmd;

/*
 *  解析用户输入的命令行参数
 * "args": ["-Xjre", "/usr/lib/jvm/jdk8-sun/jdk1.8.0_162/jre", "-cpOption", ".", "java.lang.Object"]
 */
Cmd *initCmd(int argc, char *argv[]);

/*
 * print cmd info
 */
extern void print(Cmd *this);
