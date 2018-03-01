#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
void correct()
{
    system("cls");
    printf("The answer is correct.");
    getch();
    system("cls");
}
void wrong()
{
    system("cls");
    printf("The answer is incorrect.");
    getch();
    system("cls");
}
int main()
{
    char aa[30]="quiz.dat",c,name[30],ch;
    int i=0,j,k=1,l,z,y=0,M[5];
    srand((unsigned)time(NULL));
    struct model
    {
      char q[200] ;
      char o1[50];
      char o2[50];
      char o3[50];
      char o4[50];
    };
   struct question
    {
        int qno;
        struct model qu;
        int ans;
    }Q;
    FILE *a;
    a=fopen(aa,"r+b");
    if(a==NULL)
    {
        printf("File cannot be created.");
        exit(1);
    }
    while((fread(&Q,sizeof(Q),1,a))==1)
    {
        k++;
    }
    goto A1;
    A1:
        {
    system("cls");
    printf("%s","Welcome to our page.\n");
    printf("1)Press 1 to add questions.\n2)Press 2 to play games.\n3)Press 3 to modify questions.\n4)Press 4 to exit.\n\n");
    c=getch();
    switch(c)
    {
 case '1':
    goto add;
    break;
 case '2':
    goto play;
    break;
    case '3':
   goto modify;
    case '4':
    exit(1);
   default:
    system("cls");
    printf("Invalid option");
    getch();
    }
    goto A1;
  }
     add:
         {
             system("cls");
             system("color A2");
             printf("Fill the following details.");
             printf("\nQuestion number:%d",k);
             printf("\nQuestion:\n");
             fflush(stdin);
             gets(Q.qu.q);
             printf("option1:");
             fflush(stdin);
             gets(Q.qu.o1);
             printf("option2:");
             fflush(stdin);
             gets(Q.qu.o2);
             printf("option3:");
             fflush(stdin);
             gets(Q.qu.o3);
             printf("option4:");
             fflush(stdin);
             gets(Q.qu.o4);
             printf("\nAns:");
             scanf(" %d",&Q.ans);
             fseek(a,0,SEEK_END);
             fwrite(&Q,sizeof(Q),1,a);
             k++;
             goto A1;
         }
 play:
    {
        z=0;
       system("cls");
       for(i=0;i<5;i++)
       {
           j=rand()%(k-1);
           for(y=0;y<i;y++)
           {
               if(M[y]==j)
               break;
           }
           if(y==i)
           {
               M[i]=j;
           }
           else
           {
               i--;
           }
       }
   for(i=0;i<5;i++)
       {
             fseek(a,M[i]*sizeof(Q),SEEK_SET);
              fread(&Q,sizeof(Q),1,a);
                    printf("Question:\n%s",Q.qu.q);
                    printf("\n\t1)%s",Q.qu.o1);
                    printf("\n\t2)%s",Q.qu.o2);
                    printf("\n\t3)%s",Q.qu.o3);
                    printf("\n\t4)%s",Q.qu.o4);
                printf("\nPress the correct answer:");
                scanf("%d",&l);
            if(l==Q.ans)
                  {
                      z++;
                      correct();
                  }
            else
                  {
                    wrong();
                  }

        }
    printf("You have answered %d questions correctly.",z);
    getch();
    goto A1;
    }
modify:
 {
    system("cls");
    rewind(a);
    printf("Enter the question number to modify:");
    scanf("%d",&y);
    printf("Old Details:");
    fseek(a,(y-1)*sizeof(Q),SEEK_SET);
              fread(&Q,sizeof(Q),1,a);
                    printf("Question:\n%s",Q.qu.q);
                    printf("\n\t1)%s",Q.qu.o1);
                    printf("\n\t2)%s",Q.qu.o2);
                    printf("\n\t3)%s",Q.qu.o3);
                    printf("\n\t4)%s\n",Q.qu.o4);
                    printf("Press Y to modify.");
                    fflush(stdin);
                    ch=getch();
        if(ch=='Y')
        {
            system("cls");
             printf("Fill the following details.");
             printf("\nQuestion number:%d",y);
             printf("\nQuestion:\n");
             fflush(stdin);
             gets(Q.qu.q);
             printf("option1:");
             fflush(stdin);
             gets(Q.qu.o1);
             printf("option2:");
             fflush(stdin);
             gets(Q.qu.o2);
             printf("option3:");
             fflush(stdin);
             gets(Q.qu.o3);
             printf("option4:");
             fflush(stdin);
             gets(Q.qu.o4);
             printf("\nAns:");
             scanf(" %d",&Q.ans);
             fseek(a,(y-1)*sizeof(Q),SEEK_SET);
             fwrite(&Q,sizeof(Q),1,a);
        }
    goto A1;
 }
    return 0;
}
