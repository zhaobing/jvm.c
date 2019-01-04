
#define END '\0' /*字符数组的结束符*/

#define cprint(expr) printf(#expr " = %c\n", expr)
#define dprint(expr) printf(#expr " = %d\n", expr)
#define lprint(expr) printf(#expr " = %ld\n", expr)

#define fprint(expr) printf(#expr " = %f\n", expr)
#define sprint(expr) printf(#expr " = %s\n", expr)

/*
* replace the char o to t in string s
*/
extern void replaceChar(char *s, char o, char t);
