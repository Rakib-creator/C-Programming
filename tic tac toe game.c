#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
int main()
{
    int xw=0,ow=0,dw=0;
    char rc;
    do{
    int j,k,d;
    char n[10]= {"0123456789"};
    for(j=0; j<=9; j++)
    {
        system("cls");
        printf("Tic Tac Toe game made by Rakib Howlader!\n\n");
        printf("     |     |    \n");
        printf("  %c  |  %c  | %c \n",n[1],n[2],n[3]);
        printf("     |     |    \n");
        printf("-----+-----+-----\n");
        printf("     |     |    \n");
        printf("  %c  |  %c  | %c \n",n[4],n[5],n[6]);
        printf("     |     |    \n");
        printf("-----+-----+-----\n");
        printf("     |     |    \n");
        printf("  %c  |  %c  | %c \n",n[7],n[8],n[9]);
        printf("     |     |    \n");

        if ((n[1]==n[2] && n[2]==n[3] && n[3]=='o') ||
                (n[4]==n[5] && n[5]==n[6] && n[6]=='o') ||
                (n[7]==n[8] && n[8]==n[9] && n[9]=='o') ||
                (n[1]==n[4] && n[4]==n[7] && n[7]=='o') ||
                (n[2]==n[5] && n[5]==n[8] && n[8]=='o') ||
                (n[3]==n[6] && n[6]==n[9] && n[9]=='o') ||
                (n[1]==n[5] && n[5]==n[9] && n[9]=='o') ||
                (n[3]==n[5] && n[5]==n[7] && n[7]=='o'))
        {
            printf("Player O is WIN!\n");
            ow=ow+1;;
            break;
        }
        if ((n[1]==n[2] && n[2]==n[3] && n[3]=='x') ||
                (n[4]==n[5] && n[5]==n[6] && n[6]=='x') ||
                (n[7]==n[8] && n[8]==n[9] && n[9]=='x') ||
                (n[1]==n[4] && n[4]==n[7] && n[7]=='x') ||
                (n[2]==n[5] && n[5]==n[8] && n[8]=='x') ||
                (n[3]==n[6] && n[6]==n[9] && n[9]=='x') ||
                (n[1]==n[5] && n[5]==n[9] && n[9]=='x') ||
                (n[3]==n[5] && n[5]==n[7] && n[7]=='x'))
        {
            printf("Player x is WIN!\n");
            xw=xw+1;
            break;
        }
        else if(j==9)
        {
            printf("mach is drow!\n");
            dw=dw+1;
            break;
        }

        if(j%2==0&&j<9)
        {
            printf("player x input your corte no:");
        }
        if(j%2!=0&&j<9)
        {
            printf("player 0 input your corte no:");
        }

        scanf("%d",&d);

        if (d > 0 && d < 10 && n[d] != 'o' && n[d] != 'x')
        {
            if(j%2==0)
                n[d] = 'x';
            else
                n[d] = 'o';
        }
        else
        {
            printf("wrong input\n");
            fflush(stdout);
            Sleep(1000);
            getchar();
            j--;
            continue;
        }


    }
    printf("do you want to play again?(y/n)");
    scanf(" %c",&rc);
    }while(rc=='y');


        printf("final score:\n");
        printf("player x win: %d\n",xw);
        printf("player o win: %d\n",ow);
        printf("drow: %d\n",dw);





}

