void replaceChar(char *s, char o, char t)
{
    while (*s != '\0')
    {
        if (*s == o)
        {
            *s = t;
        }
        s++;
    }
}
