#include<stdio.h>
#include<conio.h>
#include<time.h>
typedef int player;
player you,computer,life=3;
void main()
{
  int ch,a,b=3;
  while(1)
  {
  you=menu();
  playgame();
  printf("\nDo You Want To play Again:YES/NO\n");
  if(getch()=='n')
    break;
  }

}
int menu()
{
    int ch;
    printf("1:ROCK\n");
    printf("2:PAPER\n");
    printf("3:CEASER\n");
    printf("4:EXIT\n\n");
    printf("ENTER YOUR CHOICE:");
    scanf("%d",&ch);
    if(ch==4)
    {
        printf("\n\t\t\t\t\tTHANK YOU FOR PLAYING OUR GAME\n");
        exit(0);
    }
    return ch;
}
void playgame()
{
    printf("\nCOMPUTER ARE PICKING...\n");
    computer=rand()%3+1;
    userch();
    comch();
    if(computer==1 && you==3)
        printf("COMPUTER WINS\n");
    else if(computer==2 && you==1)
        printf("COMPUTER WINS\n");
    else if(computer==3 && you==2)
        printf("COMPUTER WINS\n");
    else if(computer==you)
        printf("MATCH TIED");
    else
        printf("USER WINS\n");
}
void userch()
{
    if(you==1)
        printf("USER IS CHOOSEN ROCK\n");
    else if(you==2)
        printf("USER IS CHOOSEN PAPER\n");
    else if(you==3)
        printf("USER IS CHOOSEN CEASER\n");
}
void comch()
{
    if(computer==1)
        printf("COMPUTER IS CHOOSEN ROCK\n");
    else if(computer==2)
        printf("COMPUTER IS CHOOSEN PAPER\n");
    else if(computer==3)
        printf("COMPUTER IS CHOOSEN CEASER\n");
}
