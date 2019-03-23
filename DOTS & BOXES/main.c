#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "function.h"
#include "functionpc.h"
#include "function5.h"
#include "functionpc_5.h"

    char a[]={"Welcome To DOTS & BOXES"};                                //Sentences we used up one time so they global
    char B[]={"Please Select From The Following Sentences"};
    char s[]={"START THE GAME"};
    char lb[]={"LEADER BOARD"};
    char sl[]={"SAVE & LOAD"};
    char e[]={"EXIT"};
    char sto[]={"ONE PLAYER"};
    char stt[]={"TOW PLAYERS"};
    char em[]={"BEGINNER MODE"};
    char hm[]={"EXPERT MODE"};
    char elb[]={"NO GAMES NO LEADER BOARD"};
    char esl[]={"NO GAMES NO LOADS"};
    char ss1[]={"SAVED_DATA 1"};
    char ss2[]={"SAVED_DATA 2"};
    char ss3[]={"SAVED_DATA 3"};

struct{            //structs that hold name & score
char name[100];
int score;
}player1;

struct{
char name[100];
int score;
}player2;

struct{
int score;
}pc;

typedef struct leader {     //struct hold elements of leader board
char name[100];
int score;
}leaderb;

struct{      //struct to update time in load and continue dynamic
time_t hhh;
}timee;

void p1_com(leaderb lbr[100],int *FL); //functions to store in leader board , detect if player name exists and update
void p2_com(leaderb lbr[100],int *FL);
int main()
{
    leaderb lbr[100];
    int ch,b=0,I=0,v=0,V=0,counter=0,y=0,*FL=0;
    int c[4]={'>',' ',' ',' '};   //array for arrow
    int temp,j=0,flag=0,i;
    int index[100]; //array to help in sorting leader board
    FILE* ledbr;
    for(v=0; v<100; v++){   //gives sorting numbers to array
        index[v]=v;
    }
while(1){
    hidecursor(); //to play without any interactions ^___^
     while(flag==0){  //infinity loop for main menu
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);//yellow
    gotoxy(40,5);
    puts(a);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);//purple
    gotoxy(40,7);
    puts(B);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);//light blue.
    gotoxy(40,9);
    printf("%c ",c[0]);
    puts(s);
    gotoxy(40,11);
    printf("%c ",c[1]);
    puts(sl);
    gotoxy(40,13);
    printf("%c ",c[2]);
    puts(lb);
    gotoxy(40,15);
    printf("%c ",c[3]);
    puts(e);
        ch=getch();
        if(ch==0 || ch==224){ //check which arrow button was pressed
            switch(getch()){
            case 80 :
            if(c[3]!='>'){
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
                j++;
            }else{
            c[0] = '>';
            c[3] = ' ';
            j=0;
            }
            break;
            case 72 :
            if(c[0]!='>'){
                temp = c[j];
                c[j] = c[j-1];
                c[j-1] = temp;
                j--;
            }else{
            c[0] = ' ';
            c[3] = '>';
            j=3;
            }
            break;
            }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);//purple
    gotoxy(40,5);
    puts(a);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);//yellow
    gotoxy(40,7);
    puts(B);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);//light blue.
    for(i=0;i<4;i++){
    gotoxy(40,9+(i*2));
    printf("%c ",c[i]);
    }
        }

        if(ch==13){ //if pressed enter , detect which option you want to go
        if(c[0]=='>'){
            flag=1;
            break;
        }else if(c[1]=='>'){
          flag=4;
          break;
        }else if(c[2]=='>'){
          ledbr = fopen("leaderboard.txt","r");
          if(ledbr == NULL){
            gotoxy(40,17);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
            puts(elb);
          }else{
          flag=5;
          break;
          }
        }else if(c[3]=='>'){
          flag=6;
          break;
        }
        }
    }
    system("cls"); //to renew position of arrow
    c[0]='>';
    c[1]=' ';
    c[2]=' ';
    c[3]=' ';
    j=0;
    while(flag==1){ //To choose expert or beginner
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        gotoxy(40,5);
        puts(a);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
        gotoxy(40,7);
        puts(B);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
        gotoxy(40,9);
        printf("%c ",c[0]);
        puts(em);
        gotoxy(40,11);
        printf("%c ",c[1]);
        puts(hm);
        ch=getch();
        if(ch==0 || ch==224){
            switch(getch()){
            case 80 :
            if(c[1]!='>'){
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
                j++;
            }else{
            c[0] = '>';
            c[1] = ' ';
            j=0;
            }
            break;
            case 72 :
            if(c[0]!='>'){
                temp = c[j];
                c[j] = c[j-1];
                c[j-1] = temp;
                j--;
            }else{
            c[0] = ' ';
            c[1] = '>';
            j=1;
            }
            break;
        }
        for(i=0;i<2;i++){
            gotoxy(40,9+(i*2));
            printf("%c ",c[i]);
        }
        }else if (ch==13){
           if(j==0){
            flag = 2;
            break;
           }else if(j==1){
            flag = 3;
            c[j] = ' ';
            j = 0;
            break;
           }
        }else if(ch==8){
         flag = 0;
        }
        }
    system("cls");
    c[0]='>';
    c[1]=' ';
    c[2]=' ';
    c[3]=' ';
    j=0;
    while(flag==2){ //To choose two players or one
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        gotoxy(40,5);
        puts(a);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
        gotoxy(40,7);
        puts(B);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
        gotoxy(40,9);
        printf("%c ",c[0]);
        puts(sto);
        gotoxy(40,11);
        printf("%c ",c[1]);
        puts(stt);
        ch=getch();
        if(ch==0 || ch==224){
            switch(getch()){
            case 80 :
            if(c[1]!='>'){
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
                j++;
            }else{
            c[0] = '>';
            c[1] = ' ';
            j=0;
            }
            break;
            case 72 :
            if(c[0]!='>'){
                temp = c[j];
                c[j] = c[j-1];
                c[j-1] = temp;
                j--;
            }else{
            c[0] = ' ';
            c[1] = '>';
            j=1;
            }
            break;
        }
        gotoxy(40,9);
        printf("%c ",c[0]);
        puts(sto);
        gotoxy(40,11);
        printf("%c ",c[1]);
        puts(stt);
        }
        if(ch==13){
            if(c[0]=='>'){
                flag = 8;
                break;
            }else if(c[1]=='>'){
                flag = 7;
                break;
            }
        }else if(ch==8){
         flag = 1;
        }
    }
    system("cls");
    c[0]='>';
    c[1]=' ';
    c[2]=' ';
    c[3]=' ';
    j=0;
    while(flag == 3){ //To choose two or one
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        gotoxy(40,5);
        puts(a);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
        gotoxy(40,7);
        puts(B);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
        gotoxy(40,9);
        printf("%c ",c[0]);
        puts(sto);
        gotoxy(40,11);
        printf("%c ",c[1]);
        puts(stt);
        ch=getch();
        if(ch==0 || ch==224){
            switch(getch()){
            case 80 :
            if(c[1]!='>'){
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
                j++;
            }else{
            c[0] = '>';
            c[1] = ' ';
            j=0;
            }
            break;
            case 72 :
            if(c[0]!='>'){
                temp = c[j];
                c[j] = c[j-1];
                c[j-1] = temp;
                j--;
            }else{
            c[0] = ' ';
            c[1] = '>';
            j=1;
            }
            break;
        }
        gotoxy(40,9);
        printf("%c ",c[0]);
        puts(sto);
        gotoxy(40,11);
        printf("%c ",c[1]);
        puts(stt);
        }
        if(ch==13){
            if(c[0]=='>'){
                flag = 9;
                break;
            }else if(c[1]=='>'){
                flag = 10;
                break;
            }
        }else if(ch==8){
         flag = 1;
        }
    }
    system("cls");
    c[0]='>';
    c[1]=' ';
    c[2]=' ';
    c[3]=' ';
    j=0;
    //5by5_P1 VS PC
    while(flag == 9){
        timee.hhh=0;
        gotoxy(40,9);
        player1.score = 0;
        pc.score = 0;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    printf("PLAYER ONE NAME");
    gotoxy(40,10);
    gets(player1.name);
    while((player1.name[0]=='\0') || (isspace(player1.name[0]))){
    gotoxy(40,7);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    printf("PLS ENTER EVEN ONE LETTER AND DON'T BEGIN WITH SPACE!");
    gotoxy(40,10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    printf("                                                                                                        ");
    gotoxy(40,10);
    gets(player1.name);
    }
    system("cls");
    p1Vspc_5();
    if((player1.score+pc.score)!=25){
        flag = 0;
    }else{
    if(player1.score > pc.score){
        gotoxy(0,24);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        printf("YOU WON");
        p1_com(lbr,&FL);
    }else if(player1.score < pc.score){
        gotoxy(0,24);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        printf("YOU LOOSE HAHA");
    }else{
        gotoxy(0,24);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        printf("DRAW");
    }
       gotoxy(0,25);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,26);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
    }
    }
    system("cls");
    c[0]='>';
    c[1]=' ';
    c[2]=' ';
    c[3]=' ';
    j=0;
    //5by5_P1 VS P2
    while(flag == 10){
        timee.hhh=0;
        gotoxy(40,9);
        player1.score = 0;
        player2.score = 0;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        printf("PLAYER ONE NAME");
        gotoxy(40,10);
        gets(player1.name);
        while((player1.name[0]=='\0') || (isspace(player1.name[0]))){
        gotoxy(40,7);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        printf("PLS ENTER EVEN ONE LETTER AND DON'T BEGIN WITH SPACE!");
        gotoxy(40,10);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        printf("                                                                                                        ");
        gotoxy(40,10);
        gets(player1.name);
        }
        gotoxy(40,12);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        printf("PLAYER TOW NAME");
        gotoxy(40,13);
        gets(player2.name);
        while((player2.name[0]=='\0') || (isspace(player2.name[0]))){
        gotoxy(40,7);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        printf("PLS ENTER EVEN ONE LETTER AND DON'T BEGIN WITH SPACE!");
        gotoxy(40,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        printf("                                                                                                        ");
        gotoxy(40,13);
        gets(player2.name);
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        system("cls");
        p1Vsp2_5();
        if((player1.score+player2.score)!=25){
            flag = 0;
        }else{
        if(player1.score > player2.score){
         gotoxy(0,24);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
         printf("congrats %s you won",player1.name);
         p1_com(lbr,&FL);
       }else if(player1.score < player2.score){
         gotoxy(0,24);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
         printf("congrats %s you won",player2.name);
         p2_com(lbr,&FL);
       }else{
         gotoxy(0,24);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
         printf("DRAW");
       }
       gotoxy(0,25);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,26);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
        }
    }
    system("cls");
    c[0]='>';
    c[1]=' ';
    c[2]=' ';
    c[3]=' ';
    j=0;
    //2by2_P1 VS P2
    while(flag == 7){
        timee.hhh=0;
        gotoxy(40,9);
        player1.score=0;
        player2.score=0;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        printf("PLAYER ONE NAME");
        gotoxy(40,10);
        gets(player1.name);
        while((player1.name[0]=='\0') || (isspace(player1.name[0]))){
        gotoxy(40,7);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        printf("PLS ENTER EVEN ONE LETTER AND DON'T BEGIN WITH SPACE!");
        gotoxy(40,10);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        printf("                                                                                                        ");
        gotoxy(40,10);
        gets(player1.name);
        }
        gotoxy(40,12);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        printf("PLAYER TOW NAME");
        gotoxy(40,13);
        gets(player2.name);
        while((player2.name[0]=='\0') || (isspace(player2.name[0]))){
        gotoxy(40,7);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        printf("PLS ENTER EVEN ONE LETTER AND DON'T BEGIN WITH SPACE!");
        gotoxy(40,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        printf("                                                                                                        ");
        gotoxy(40,13);
        gets(player2.name);
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        system("cls");
        p1Vsp2 ();
        if((player1.score+player2.score)!=4){
            flag = 0;
        }else{
        if(player1.score > player2.score){
        gotoxy(0,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
         printf("congrats %s you won",player1.name);
         p1_com(lbr,&FL);
       }else if(player1.score < player2.score){
         gotoxy(0,13);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
         printf("congrats %s you won",player2.name);
         p2_com(lbr,&FL);
       }else{
         gotoxy(0,13);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
         printf("DRAW");
       }
       gotoxy(0,15);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,16);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
        }
    }
    system("cls");
    c[0]='>';
    c[1]=' ';
    c[2]=' ';
    c[3]=' ';
    j=0;
    //2by2_P1 VS PC
    while(flag==8){
    timee.hhh=0;
    gotoxy(40,9);
    player1.score=0;
    pc.score=0;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    printf("PLAYER ONE NAME");
    gotoxy(40,10);
    gets(player1.name);
    while((player1.name[0]=='\0') || (isspace(player1.name[0]))){
    gotoxy(40,7);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    printf("PLS ENTER EVEN ONE LETTER AND DON'T BEGIN WITH SPACE!");
    gotoxy(40,10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    printf("                                                                                                        ");
    gotoxy(40,10);
    gets(player1.name);
    }
    system("cls");
    p1Vshuman();
    if((player1.score+pc.score)!=4){
        flag = 0;
    }else{
    if(player1.score > pc.score){
        gotoxy(5,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        printf("YOU WON");
        p1_com(lbr,&FL);
    }else if(player1.score < pc.score){
        gotoxy(5,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        printf("YOU LOOSE HAHA");
    }else{
        gotoxy(5,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        printf("DRAW");
    }
       gotoxy(5,15);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,16);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
    }
    }
    system("cls");
    c[0] ='>';
    c[1] =' ';
    c[2] =' ';
    c[3] =' ';
    j=0;
    //SAVE & LOAD
    while(flag == 4){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    gotoxy(40,5);
    puts(a);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
    gotoxy(40,7);
    puts(B);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    gotoxy(40,9);
    printf("%c ",c[0]);
    puts(ss1);
    gotoxy(40,11);
    printf("%c ",c[1]);
    puts(ss2);
    gotoxy(40,13);
    printf("%c ",c[2]);
    puts(ss3);
    ch=getch();
        if(ch==0 || ch==224){
            switch(getch()){
            case 80 :
            if(c[2]!='>'){
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
                j++;
            }else{
            c[0] = '>';
            c[2] = ' ';
            j=0;
            }
            break;
            case 72 :
            if(c[0]!='>'){
                temp = c[j];
                c[j] = c[j-1];
                c[j-1] = temp;
                j--;
            }else{
            c[0] = ' ';
            c[2] = '>';
            j=2;
            }
            break;
        }
        }
    for(i=0;i<3;i++){
    gotoxy(40,9+(i*2));
    printf("%c ",c[i]);
    }
    if (ch==8){
        flag = 0;
    }
    if(ch==13){
        if(c[0]=='>'){ //Those if for check if file are empty or not
            FILE* fptr = fopen("saved1.txt","r");
            if(fptr == NULL){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
                gotoxy(40,15);
                puts(esl);
            }else{
            flag = 12;
            }
            fclose(fptr);
        }else if(c[1]=='>'){
            FILE* fptr = fopen("saved2.txt","r");
            if(fptr == NULL){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
                gotoxy(40,15);
                puts(esl);
            }else{
            flag = 13;
            }
            fclose(fptr);
        }else if(c[2]=='>'){
            FILE* fptr = fopen("saved3.txt","r");
            if(fptr == NULL){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
                gotoxy(40,15);
                puts(esl);
            }else{
            flag = 14;
            }
            fclose(fptr);
        }
    }
    }

    system("cls");
    c[0] ='>';
    c[1] =' ';
    c[2] =' ';
    c[3] =' ';
    j=0;
    //load save1
    while(flag == 12){
        int ss;
        FILE* fptr = fopen("saved1.txt","r");
        fscanf(fptr , "%d" , &ss);
        fclose(fptr);
        if(ss == 1){ //Those if are to check any mode to load
        p1Vsp2_load1();
        if((player1.score+player2.score)!=4){
            flag = 0;
        }else{
        if(player1.score > player2.score){
        gotoxy(0,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
         printf("congrats %s you won",player1.name);
         p1_com(lbr,&FL);
       }else if(player1.score < player2.score){
         gotoxy(0,13);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
         printf("congrats %s you won",player2.name);
         p2_com(lbr,&FL);
       }else{
         gotoxy(0,13);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
         printf("DRAW");
       }
       gotoxy(0,15);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,16);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
        }
        }else if(ss == 2){
        p1Vshuman_load1();
        if((player1.score+pc.score)!=4){
            flag = 0;
        }else{
        if(player1.score > pc.score){
        gotoxy(5,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        printf("YOU WON");
        p1_com(lbr,&FL);
    }else if(player1.score < pc.score){
        gotoxy(5,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        printf("YOU LOOSE HAHA");
    }else{
        gotoxy(5,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        printf("DRAW");
    }
       gotoxy(5,15);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,16);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
        }
        }else if(ss == 3){
           p1Vsp2_5_load1();
           if((player1.score+player2.score)!=25){
            flag = 0;
           }else{
           if(player1.score > player2.score){
         gotoxy(0,24);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
         printf("congrats %s you won",player1.name);
         p1_com(lbr,&FL);
       }else if(player1.score < player2.score){
         gotoxy(0,24);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
         printf("congrats %s you won",player2.name);
         p2_com(lbr,&FL);
       }else{
         gotoxy(0,24);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
         printf("DRAW");
       }
       gotoxy(0,25);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,26);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
           }
        }else if(ss == 4){
           p1Vspc_5_load1();
           if((player1.score+pc.score)!=25){
            flag = 0;
           }else{
           if(player1.score > pc.score){
        gotoxy(0,24);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        printf("YOU WON");
        p1_com(lbr,&FL);
    }else if(player1.score < pc.score){
        gotoxy(0,24);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        printf("YOU LOOSE HAHA");
    }else{
        gotoxy(0,24);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        printf("DRAW");
    }
       gotoxy(0,25);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,26);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
           }
        }
    }
    //load save2
    while(flag == 13){
        timee.hhh=0;
        int ss;
        FILE* fptr = fopen("saved2.txt","r");
        fscanf(fptr , "%d" , &ss);
        fclose(fptr);
        if(ss == 1){
                timee.hhh=0;
           p1Vsp2_load2();
           if((player1.score+player2.score)!=4){
            flag = 0;
           }else{
           if(player1.score > player2.score){
        gotoxy(0,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
         printf("congrats %s you won",player1.name);
         p1_com(lbr,&FL);
       }else if(player1.score < player2.score){
         gotoxy(0,13);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
         printf("congrats %s you won",player2.name);
         p2_com(lbr,&FL);
       }else{
         gotoxy(0,13);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
         printf("DRAW");
       }
       gotoxy(0,15);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,16);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
           }
        }else if(ss == 2){
           p1Vshuman_load2();
           if((player1.score+pc.score)!=4){
            flag = 0;
           }else{
           if(player1.score > pc.score){
        gotoxy(5,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        printf("YOU WON");
        p1_com(lbr,&FL);
    }else if(player1.score < pc.score){
        gotoxy(5,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        printf("YOU LOOSE HAHA");
    }else{
        gotoxy(5,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        printf("DRAW");
    }
       gotoxy(5,15);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,16);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
           }
        }else if(ss == 3){
           p1Vsp2_5_load2();
           if((player1.score+player2.score)!=25){
            flag = 0;
           }else{
           if(player1.score > player2.score){
         gotoxy(0,24);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
         printf("congrats %s you won",player1.name);
         p1_com(lbr,&FL);
       }else if(player1.score < player2.score){
         gotoxy(0,24);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
         printf("congrats %s you won",player2.name);
         p2_com(lbr,&FL);
       }else{
         gotoxy(0,24);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
         printf("DRAW");
       }
       gotoxy(0,25);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,26);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
           }
        }else if(ss == 4){
           p1Vspc_5_load2();
           if((player1.score+pc.score)!=25){
            flag = 0;
           }else{
           if(player1.score > pc.score){
        gotoxy(0,24);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        printf("YOU WON");
        p1_com(lbr,&FL);
    }else if(player1.score < pc.score){
        gotoxy(0,24);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        printf("YOU LOOSE HAHA");
    }else{
        gotoxy(0,24);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        printf("DRAW");
    }
       gotoxy(0,25);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,26);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
           }
        }
    }
    //load save3
    while(flag == 14){
        timee.hhh=0;
        int ss;
        FILE* fptr = fopen("saved3.txt","r");
        fscanf(fptr , "%d" , &ss);
        fclose(fptr);
        if(ss == 1){
           p1Vsp2_load3();
           if((player1.score+player2.score)!=4){
            flag = 0;
           }else{
           if(player1.score > player2.score){
        gotoxy(0,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
         printf("congrats %s you won",player1.name);
         p1_com(lbr,&FL);
       }else if(player1.score < player2.score){
         gotoxy(0,13);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
         printf("congrats %s you won",player2.name);
         p2_com(lbr,&FL);
       }else{
         gotoxy(0,13);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
         printf("DRAW");
       }
       gotoxy(0,15);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,16);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
           }
        }else if(ss == 2){
           p1Vshuman_load3();
           if((player1.score+pc.score)!=4){
            flag = 0;
           }else{
           if(player1.score > pc.score){
        gotoxy(5,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        printf("YOU WON");
        p1_com(lbr,&FL);
    }else if(player1.score < pc.score){
        gotoxy(5,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        printf("YOU LOOSE HAHA");
    }else{
        gotoxy(5,13);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        printf("DRAW");
    }
       gotoxy(5,15);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,16);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
           }
        }else if(ss == 3){
           p1Vsp2_5_load3();
           if((player1.score+player2.score)!=25){
            flag = 0;
           }else{
           if(player1.score > player2.score){
         gotoxy(0,24);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
         printf("congrats %s you won",player1.name);
         p1_com(lbr,&FL);
       }else if(player1.score < player2.score){
         gotoxy(0,24);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
         printf("congrats %s you won",player2.name);
         p2_com(lbr,&FL);
       }else{
         gotoxy(0,24);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
         printf("DRAW");
       }
       gotoxy(0,25);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,26);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
           }
        }else if(ss == 4){
           p1Vspc_5_load3();
           if((player1.score+pc.score)!=25){
            flag = 0;
           }else{
           if(player1.score > pc.score){
        gotoxy(0,24);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        printf("YOU WON");
        p1_com(lbr,&FL);
    }else if(player1.score < pc.score){
        gotoxy(0,24);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
        printf("YOU LOOSE HAHA");
    }else{
        gotoxy(0,24);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
        printf("DRAW");
    }
       gotoxy(0,25);
       printf("PLAY AGAIN! (y/n)");
       char chh = getch();
       while((chh!='y')&&(chh!='n')){
        gotoxy(0,26);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
       if(chh=='y'){
        flag = 2;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }else if(chh=='n'){
        flag = 0;
        c[0] ='>';
        c[1] =' ';
        c[2] =' ';
        c[3] =' ';
        j=0;
        system("cls");
       }
           }
        }
    }
    //LEADRER BOARD.
    while(flag == 5){
            i=0;
        ledbr = fopen("leaderboard.txt","r");
        while (!feof(ledbr)){
        fscanf(ledbr, "%d,%[^,],\n", &lbr[i].score,lbr[i].name);
        i++;
        }
        fclose(ledbr);
        for(b=b; b<i-1; b++){ //Sorting leader board
            for(I=b; I<i-1; I++){
                if(lbr[b].score >= lbr[I+1].score){
                    continue;
                }else{
                   temp = lbr[I+1].score;
                   lbr[I+1].score = lbr[b].score;
                   lbr[b].score = temp;
                   temp = index[I+1];
                   index[I+1] = index[b];
                   index[b] = temp;
                }
        }
        }
        gotoxy(40,5);
        printf("The Leader Bored ^__^");
        gotoxy(40,6);
        printf("=====================");
        gotoxy(40,7);
        printf("Name                                      score\n");
        gotoxy(40,8);
        printf("===============================================");
        gotoxy(40,9);
        for (b=0; b<i; b++){
                gotoxy(40,9+b);
            printf("%s\n",lbr[index[b]].name);
        }
        gotoxy(84,9);
        for(b=0; b<i; b++){
                gotoxy(84,b+9);
            printf("%d",lbr[b].score);
        }
        ch = getch();
        while(ch!=8){
            gotoxy(40,12+i);
            printf("PRESS ONLY BACKSPACE!");
            ch = getch();
        }
        if(ch==8){
            flag = 0;
        }
    }
    system("cls");
    c[0] ='>';
    c[1] =' ';
    c[2] =' ';
    c[3] =' ';
    j=0;
    while(flag == 6){
            return 0;
    }

}
    return 0;
}
void p1_com(leaderb lbr[100],int *FL){ //function to add player name to leader board, detect if this name exists or not (player 1 has won)
        int i=0;
        int V=0;
        int counter=0;
        int v=0;
        int y=0;
        FILE* ledbr;
        ledbr = fopen("leaderboard.txt","r");
        if (ledbr!=NULL){
        while (!feof(ledbr)){
        fscanf(ledbr, "%d,%[^,],\n", &lbr[i].score,lbr[i].name);
        i++;
        }
        fclose(ledbr);

        for(v=0; v<i; v++){
        if((strlen(player1.name)>strlen(lbr[v].name)) || (strlen(player1.name)<strlen(lbr[v].name))){
        }else {
         for(V=0 ; V<strlen(player1.name); V++){
            if(lbr[v].name[V]==player1.name[V]){
                counter++;
            }
            if(counter == strlen(player1.name)){
                if (lbr[v].score<player1.score){
                lbr[v].score = player1.score;
                FL=1;
            }
            }
            if (V==strlen(player1.name)-1){
                counter=0;
            }

         }
        }
         if ((v==i-1)){
                if (FL==1){
                 ledbr = fopen("leaderboard.txt","w");
                for(y=0; y<i; y++){
                fprintf(ledbr , "%d,%s,\n",lbr[y].score,lbr[y].name);
                }
                fclose(ledbr);
                FL=0;
                }else {
                ledbr = fopen("leaderboard.txt","a");
                fprintf(ledbr , "%d,%s,\n",player1.score,player1.name);
                fclose(ledbr);
                }
            }
        }
        }else {
               ledbr = fopen("leaderboard.txt","a");
               fprintf(ledbr , "%d,%s,\n",player1.score,player1.name);
               fclose(ledbr);
        }
        fclose(ledbr);
}
void p2_com(leaderb lbr[100],int *FL){ //function to add player name to leader board, detect if this name exists or not (player 2 has won)
        int i=0;
        int V=0;
        int counter=0;
        int v=0;
        int y=0;
        FILE* ledbr;
        ledbr = fopen("leaderboard.txt","r");
        if (ledbr!=NULL){
        while (!feof(ledbr)){
        fscanf(ledbr, "%d,%[^,],\n", &lbr[i].score,lbr[i].name);
        i++;
        }
        fclose(ledbr);

        for(v=0; v<i; v++){
        if((strlen(player2.name)>strlen(lbr[v].name)) || (strlen(player2.name)<strlen(lbr[v].name))){
        }else {
         for(V=0 ; V<strlen(player2.name); V++){
            if(lbr[v].name[V]==player2.name[V]){
                counter++;
            }
            if(counter == strlen(player2.name)){
                if (lbr[v].score<player2.score){
                lbr[v].score = player2.score;
                FL=1;
            }
            }
            if (V==strlen(player2.name)-1){
                counter=0;
            }

         }
        }
        if ((v==i-1)){
                if (FL==1){
                 ledbr = fopen("leaderboard.txt","w");
                for(y=0; y<i; y++){
                fprintf(ledbr , "%d,%s,\n",lbr[y].score,lbr[y].name);
                }
                fclose(ledbr);
                FL=0;
                }else {
                ledbr = fopen("leaderboard.txt","a");
                fprintf(ledbr , "%d,%s,\n",player2.score,player2.name);
                fclose(ledbr);
                }

            }
        }
        }else {
               ledbr = fopen("leaderboard.txt","a");
               fprintf(ledbr , "%d,%s,\n",player2.score,player2.name);
               fclose(ledbr);
        }
        fclose(ledbr);
}
