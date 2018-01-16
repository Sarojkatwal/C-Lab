#include <stdio.h>
#include <string.h>
int main()
{
    char name[]="Saroj Katwal",s[15];
    int i=0;
    while(name[i]!='\0')
    {
        s[i]=name[i];
        i++;
    }
    s[i]='\0';
    printf("s=%s",s);
    return 0;
}

