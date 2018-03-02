#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
void display(int ,int  ,int  ,int);
void player2(int[],int,int,int*,int*);
void player3(int[],int,int,int,int*,int*);
void player4(int[],int,int,int,int,int*,int*);
int Q=12,J=11,K=13,ii,oo;
gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
    FILE *fptr1,*fptr;
    char p,ch[5],next[5],cha;
    int sum1=0,m,P1,P2,sum2=0,P3,sum3=0,P4,sum4=0;
    int i,no_of_cards=1,greatest;
   int a[52]={1,2,3,4,5,6,7,8,9,10,11,12,13};
   int arr[5],k;
     srand(time(NULL));
    int size=sizeof(a)/sizeof(a[0]);
    for(i=0;i<size;i++)
    {
        a[i]=rand()%13+1;
    }
    goto www;
    www:
    {
    char p,ch[5],next[5];
    int sum1=0,m,P1,P2,sum2=0,P3,sum3=0,P4,sum4=0;
    int i,no_of_cards=1,greatest;
   int a[52]={1,2,3,4,5,6,7,8,9,10,11,12,13};
   int arr[5],k;
     srand(time(NULL));
    int size=sizeof(a)/sizeof(a[0]);
    for(i=0;i<size;i++)
    {
        a[i]=rand()%13+1;
    }
    system("color 0F");
    printf("Press Enter to enjoy the game.");
    getch();
    goto www1;
    }
    www1:
    {
    system("cls");
    system("color A3");
    printf("\nLoading...\n");
    for(ii=0;ii<130;ii++)
    {
    fflush(stdin);
    printf("%c",178);
    for(oo=0;oo<10000000;oo++)
    {

    }
    }
    oo=0;
    ii=0;
    goto ww;
   }
   ww:
  {
    system("cls");
    display(45,0,50,8);
    printf("\n");
    printf("1)Press 1 to play game.\n");
    printf("2)Press 2 to know about the game.\n");
    printf("3)Press 3 to get help.\n");
    printf("4)Press 4 to exit the game.\n");
    scanf("%d",&oo);
    switch(oo)
    {
    case 1:
        goto ww1;
        break;
    case 2:
        goto ww2;
        break;
    case 3:
        goto ww3;
        break;
    case 4:
        exit(1);
        break;
    default:
        printf("Invalid Option!!!!!!");
        getch();
        goto ww;
        break;
    }
  }
    ww1:
    {
    system("cls");
    system("color A5");
    printf("IT IS THE TURN OF FIRST PLAYER\n");
    printf("Enter any number: ");
    scanf("%d",&i);
    sum1=sum1+a[i];
    printf("Your card value  is %d\n",a[i]);
        for(m=0;m<5;m++)
    {
    printf("DO YOU WANT TO CHOOSE NEXT CARD:\n");
       scanf("%s",&ch);

        if(strcmp(ch,"no")==0||strcmp(ch,"NO")==0)
       break;
       else if(strcmp(ch,"yes")==0||strcmp(ch,"YES")==0)
        {
            no_of_cards++;
    printf("Enter any number:");
    scanf("%d",&i);
    printf("Your card value is %d\n",a[i]);
    sum1=sum1+a[i];
    {
    if(sum1>17)
    {
        P1='OUT';
    printf("YOU ARE OUT OF THE GAME DUDE!!\n");
        break;
    }
    if(no_of_cards==5||sum1==17)
    {
        printf("YOU WON THE GAME,LUCKY GUY!!");
    exit(1);
    }
    }
        }
        else
        {
            printf("Please enter either yes or no.\n");
        }

    }
    if(sum1<17)
        {
    printf("YOUR SUM OF CARDS IS %d:::REMEMBER IT::\n",sum1);
        }
          printf("PRESS NEXT TO FINISH YOUR TURN:");
           scanf("%s",&next);
       system("cls");
    player2(a,i,P1,&P2,&sum2);
     player3(a,i,P1,P2,&P3,&sum3);
     player4(a,i,P1,P2,P3,&P4,&sum4);

     printf("SUM OF CARDS OF FIRST PLAYER IS %d\n",sum1);
     printf("SUM OF CARDS OF SECOND PLAYER IS %d\n",sum2);
     printf("SUM OF CARDS OF THIRD PLAYER IS %d\n",sum3);
     printf("SUM OF CARDS OF FOURTH PLAYER IS %d\n\n\n",sum4);

     if(P1=='OUT')
        sum1=0;
     if(P2=='OUT')
        sum2=0;
     if(P3=='OUT')
        sum3=0;
     if(P4=='OUT')
        sum4=0;
      if(sum1>sum2&&sum1>sum3&&sum1>sum4)
            printf("FIRST PLAYER WON THE GAME::");
      if(sum2>sum1&&sum2>sum3&&sum2>sum4)
            printf("SECOND PLAYER WON THE GAME::");
     if(sum3>sum1&&sum3>sum2&&sum3>sum4)
            printf("THIRD PLAYER WON THE GAME::");
     if(sum4>sum1&&sum4>sum2&&sum4>sum3)
            printf("FOURTH PLAYER WON THE GAME::");
            getch();
            exit(1);
    }
ww2:
  {
      system("cls");
      fptr=fopen("about.txt","r");
      fflush(stdin);
      while((cha=fgetc(fptr))!=EOF)
      {
          putchar(cha);
      }
      fclose(fptr);
      getch();
      goto ww;
  }
  ww3:
  {
      system("cls");
      fptr1=fopen("help.txt","r");
      fflush(stdin);
      while((cha=fgetc(fptr1))!=EOF)
      {
          printf("%c",cha);
      }
      fclose(fptr1);
      getch();
      goto ww;
  }

    return 0;
}
void player2(int a[],int i,int P1,int*P2,int*sum2)
{

    char p,ch[5];
    int *f;
     system("color B4");
    int m,no_of_cards=1;
     if(P1=='OUT')
     {
        printf("PLAYER FIRST IS OUT OF THE GAME::");
     }
    else
    {
        printf("FIRST PLAYER IS ON WAITING LIST::");
    }

    printf("IT IS THE TURN OF SECOND PLAYER:\n");

     for(i=0;i<13;i++)
    {
        f=a;
    }

    printf("Enter any number:");
    scanf("%d",&i);

    *sum2=*sum2 + *(f+i);
    printf("Your card value  is %d\n",a[i]);
        for(m=0;m<5;m++)
    {
    printf("DO YOU WANT OT CHOOSE NEXT CARD:\n");
       scanf("%s",&ch);

        if(strcmp(ch,"no")==0||strcmp(ch,"NO")==0)
       break;
       else if(strcmp(ch,"yes")==0||strcmp(ch,"YES")==0)
        {
            no_of_cards++;
    printf("Enter any number:");
    scanf("%d",&i);
    printf("Your card value  is %d\n",a[i]);
    *sum2=*sum2+*(f+i);
    {
    if(*sum2>17)
    {
        *P2='OUT';
    printf("YOU ARE OUT OF THE GAME DUDE!!\n");
        break;
    }
    if(no_of_cards==5||*sum2==17)
    {
        printf("YOU WON THE GAME,LUCKY GUY!!");
    exit(1);
    }
    }
        }
        else
        {
            printf("Please enter either yes or no.\n");
        }

    }
    if(*sum2<17)
        {
    printf("YOUR SUM OF CARDS IS %d:::REMEMBER IT::\n",*sum2);
        }
          printf("TYPE NEXT TO FINISH YOUR TURN:\n");
         scanf("%s",&p);

        system("cls");
}



void player3(int a[],int i,int P1,int P2,int*P3,int*sum3)
{

    char p,ch[5];
    int *f;
   system("color D5");
    int m,no_of_cards=1;
     if(P1=='OUT')
        printf("PLAYER FIRST IS OUT OF THE GAME::\n");
    else
        printf("FIRST PLAYER IS ON WAITING LIST::\n");

        if(P2=='OUT')
        printf("PLAYER SECOND IS OUT OF THE GAME::\n");
    else
        printf("SECOND PLAYER IS ON WAITING LIST::\n");


    printf("IT IS THE TURN OF THIRD PLAYER.\n");

     for(i=0;i<13;i++)
    {
        f=a;
    }

    printf("Enter any number:");
    scanf("%d",&i);

    *sum3=*sum3 + *(f+i);
    printf("YOUR CARD VALUE IS %d\n",a[i]);
        for(m=0;m<5;m++)
    {
    printf("DO YOU WANT OT CHOOSE NEXT CARD:\n");
       scanf("%s",&ch);

        if(strcmp(ch,"no")==0||strcmp(ch,"NO")==0)
       break;
       else if(strcmp(ch,"yes")==0||strcmp(ch,"YES")==0)
        {
            no_of_cards++;
    printf("Enter any number:");
    scanf("%d",&i);
    printf("Your card value  is %d\n",a[i]);
    *sum3=*sum3+*(f+i);
    {
    if(*sum3>17)
    {
        *P3='OUT';
    printf("YOU ARE OUT OF THE GAME DUDE!!\n");
        break;
    }
    if(no_of_cards==5||*sum3==17)
    {
        printf("YOU WON THE GAME,LUCKY GUY!!");
    exit(1);
    }
    }
        }
        else
        {
            printf("Please enter either yes or no.\n");
        }

    }
    if(*sum3<17)
        {
    printf("YOUR SUM OF CARDS IS %d:::REMEMBER IT::\n",*sum3);
        }
          printf("TYPE NEXT TO FINISH YOUR TURN:\n");
         scanf("%s",&p);

        system("cls");

}
void player4(int a[],int i,int P1,int P2,int P3,int*P4,int*sum4)
{

    char p,ch[5];
    int *f;
    system("color F2");
    int m,no_of_cards=1;
     if(P1=='OUT')
        printf("PLAYER FIRST IS OUT OF THE GAME::\n");
    else
        printf("FIRST PLAYER IS ON WAITING LIST::\n");

        if(P2=='OUT')
        printf("PLAYER SECOND IS OUT OF THE GAME::\n");
    else
        printf("SECOND PLAYER IS ON WAITING LIST::\n");
          if(P3=='OUT')
        printf("PLAYER THIRD IS OUT OF THE GAME::\n");
    else
        printf("THIRD PLAYER IS ON WAITING LIST::\n");



    printf("IT IS THE TURN OF FOURTH PLAYER.\n");

     for(i=0;i<13;i++)
    {
        f=a;
    }

    printf("Enter any number:");
    scanf("%d",&i);

    *sum4=*sum4 + *(f+i);
    printf("Your card value  is %d\n",a[i]);
        for(m=0;m<5;m++)
    {
    printf("DO YOU WANT OT CHOOSE NEXT CARD:\n");
       scanf("%s",&ch);

        if(strcmp(ch,"no")==0||strcmp(ch,"NO")==0)
       break;
       else if(strcmp(ch,"yes")==0||strcmp(ch,"YES")==0)
        {
            no_of_cards++;
    printf("Enter any number:");
    scanf("%d",&i);
    printf("Your card value is %d.\n",a[i]);
    *sum4=*sum4+*(f+i);
    {
    if(*sum4>17)
    {
        *P4='OUT';
    printf("YOU ARE OUT OF THE GAME DUDE!!\n");
        break;
    }
    if(no_of_cards==5||*sum4==17)
    {
        printf("YOU WON THE GAME,LUCKY GUY!!");
    exit(1);
    }
    }
        }
        else
        {
            printf("Please enter either yes or no.\n");
        }

    }
    if(*sum4<17)
        {
    printf("YOUR SUM OF CARDS IS %d:::REMEMBER IT::\n",*sum4);
        }
          printf("TYPE NEXT TO FINISH YOUR TURN:\n");
         scanf("%s",&p);

         system("cls");
}
void display(int mm ,int nn ,int ll ,int bb)
{
int i,j;
    system("color A7");
     gotoxy(mm+10,nn+4);
    printf(" WELCOME TO SATRA GAME.");
    for(j=nn;j<=nn+bb;j++)
    {
        for(i=mm;i<=mm+ll;i++)
        {
            if(j==nn||j==nn+bb||i==mm||i==mm+ll)
            {
                gotoxy(i,j);
                printf("%c",254);
            }
        }
    }

    system("color A4");
}
