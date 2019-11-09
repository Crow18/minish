#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int lenstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *getstr()
{
    char *strn;
    int i;
    char str[400];
    read(0, str, 400);

    
    strn = (char*)malloc((lenstr(str)) * sizeof(char)+ 1);
    while(str[i])
    {
        strn[i]=str[i];
        
        if (str[i] == '\n')
        {
            break ;
        }
        i++;
    }
    strn[i] = '\0';
    return(strn);

}

void putstr(char *strg)
{
    int i = 0;
    while(strg[i])
    {
        write(1, &strg[i], 1);
        i++;
    }
}

main()
{
    // printf("%d\n", lenstr(getstr()));
    // printf("%s", getstr());
    // printf("%s", getstr());
    putstr(getstr());
    // putstr(getstr());
    // putstr(getstr());
}