/*C program to check alphabet, digit or special character using ASCII value*/
#include <stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf("%c is alphabet.", ch);
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("%c is number.", ch);
    }
    else
    {
        printf("%c is special character.", ch);
    }
     if(isalnum(ch)){
        printf("\n%c is an alphanumeric character.",ch);
     }
      if(isblank(ch)){
        printf("\n%c is an blank character.",ch);
     }
     if(isalpha(ch)){
        printf("\n%c is an alphabetic character.",ch);
     }
     if(iscntrl(ch)){
        printf("\n%c is an control character.",ch);
     }
     if(isdigit(ch)){
        printf("\n%c is an number digit character.",ch);
     }
     if(isupper(ch)){
        printf("\n%c is an upper case character.",ch);
     }
     if(islower(ch)){
        printf("\n%c is an lower case character.",ch);
     }
     if(isxdigit(ch)){
        printf("\n%c is an hexadecimal digit character.",ch);
     }
      if(isgraph(ch)){
        printf("\n%c is an graphical character.",ch);
     }
    return 0;
}




