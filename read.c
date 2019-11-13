#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

char *getstr(void)
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
    i = 0;
    return(strn);
}

void ftfre(char *str)
{
    free(str);
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

int splitter()
{
    char str[100];
    char splitStrings[400][400]; //can store 10 words of 10 characters
    int i,j,cnt;
 
    printf("Enter a string: ");
    gets(str);
 
    j=0; cnt=0;
    for(i=0;i<=(strlen(str));i++)
    {
        // if space or NULL found, assign NULL into splitStrings[cnt]
        if(str[i] == ' ' || str[i]=='\0')
        {
            splitStrings[cnt][j]='\0';
            cnt++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            splitStrings[cnt][j]=str[i];
            j++;
        }
    }
    printf("\nOriginal String is: %s",str);
    printf("\nStrings (words) after split by space:\n");
    for(i=0;i < cnt;i++)
        printf("%s\n",splitStrings[i]);
    return 0;
}

main()
{
    putstr(getstr());
    putstr("\n");
    putstr(getstr());
    putstr("\n");
    putstr(getstr());
    putstr("\n");
}

