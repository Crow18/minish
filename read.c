#include <stdlib.h>
#include <unistd.h>

#define NUM 400;

int		lenstr(char *str)
{
	int		i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char	*getstr(void)
{
    char *strn;
    int i;
	int n;

	n = NUM;
    char str[n];

    read(0, str, n); 
    strn = (char*)malloc((lenstr(str)) * sizeof(char)+ 1);
    while (str[i])
    {
        strn[i]=str[i];
        
        if (str[i] == '\n')
        {
            break ;
        }
        i++;
    }
    strn[i] = '\0';
    i = 0;
    return(strn);
}


void	putstr(char *strg)
{
    int i = 0;
    while(strg[i])
    {
        write(1, &strg[i], 1);
        i++;
    }
}

char *splitter()
{
    char str[] = "hello friends";
    char *strn;
    int i =0;

    while(str[i])
    {
        if(str[i] < 33 && str[i])
            i++;
        else
            strn[i] = str[i];
        i++;
    }
    strn[i] = '\0';
    return (strn);
}

int		main(void)
{
    putstr(splitter());
    putstr("\n");
}
