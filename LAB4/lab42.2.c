/*A program to check whether an alphabet is vowel or consonant.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    char a;
    printf("Enter an alphabet: ");
    scanf("%c",&a);
    switch(a)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      printf("%c is vowel.",a);
      break;
    default:
       printf("%c is not vowel.",a);
    }
    return 0;
}




