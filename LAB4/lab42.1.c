/*A program to check whether an alphabet is vowel or not.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    char a;
    printf("Enter an alphabet: ");
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
        printf("%c is vowel.",a);
    else
        printf("%c is not vowel.",a);
    return 0;
}
