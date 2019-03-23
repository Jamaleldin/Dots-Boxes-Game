#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <conio.h>
#include <omp.h>
#include <time.h>
#include "function.h"

struct{
char name[100];
int score;
}player1;
struct{
int score;
}pc;
struct{
time_t hhh;
}timee;
void Colors3(int a6[5][60],char C[16][17],int a[16][17],int GHline[],int GVline[],int a5[],int a3[2][25],int aa[4][4],int rr,int score1,int score2,int r,int f,int J,time_t start,time_t finish,int num,int moves,int K,int H){

      int i,j,iii,iiii,bb,ii;
     int k;
     gotoxy(0,0);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
     printf("Welcome to this mode ^_____________^");
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);




     gotoxy(30,2);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),160);
     printf("%s:%d ",player1.name,score1);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
     printf(" PC:%d ",score2);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
     k=(((finish - start)) / CLOCKS_PER_SEC);
     gotoxy(30,7);
     printf("time : %d%d : %d%d                               ",(k/60)/10,(k/60)%10,(k%60)/10,k%10);
     gotoxy(30,5);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
     printf("REMAINING LINES:%d%d ",moves/10,moves%10);
     gotoxy(30,3);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
     printf("%s moves:%d  PC moves:%d",player1.name,K,H); //K for player 1 , H for player 2
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
     gotoxy(70,18);
     printf("INSTRUCTIONS");
     gotoxy(70,19);
     printf("============");
     gotoxy(70,20);
     printf("PRESS:esc to exit");
     gotoxy(70,21);
     printf("PRESS:s to save");
     gotoxy(70,22);
     printf("PRESS:r to redo");
     gotoxy(70,23);
     printf("PRESS:u to undo");
     gotoxy(70,24);
     printf("PRESS:arrow to move the arrow");
     gotoxy(70,25);
     printf("PRESS:enter to choose the dot");
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

     gotoxy(J+5,f+4);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
     printf("%c",C[f][J]);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

     for (i=0; i<rr; i++){
                if (a6[4][i]%2==0){
            if (a6[0][i]==a6[1][i]){
                gotoxy(a6[2][i]+5,a6[0][i]+4);
         for(iii=0;iii<4;iii++){
            if((iii==1)||(iii==2)){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
                printf("%c",GHline[iii]);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        }else{
        printf("%c",GHline[iii]);
        }
    }
            }else {
            gotoxy(a6[2][i]+5,a6[0][i]+4);
         for(iiii=0;iiii<4;iiii++){
                gotoxy(a6[2][i]+5,a6[0][i]+iiii+4);
        if((iiii==1)||(iiii==2)){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
                printf("%c\n",GVline[iiii]);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        }else{
        printf("%c\n",GVline[iiii]);
        }
    }
            }
        }else {
        if (a6[0][i]==a6[1][i]){
                gotoxy(a6[2][i]+5,a6[0][i]+4);
         for(iii=0;iii<4;iii++){
            if((iii==1)||(iii==2)){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
                printf("%c",GHline[iii]);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        }else{
        printf("%c",GHline[iii]);
        }
    }
            }else {
            gotoxy(a6[2][i]+5,a6[0][i]+4);
         for(iiii=0;iiii<4;iiii++){
                gotoxy(a6[2][i]+5,a6[0][i]+iiii+4);
        if((iiii==1)||(iiii==2)){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
                printf("%c\n",GVline[iiii]);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        }else{
        printf("%c\n",GVline[iiii]);
        }
    }
            }
        }
        }
   gotoxy(J+5,f+4);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
     printf("%c",C[f][J]);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

   if ((score1!=0)||(score2!=0)){
        for (i=0; i<r; i++){
            if (a5[i]==1){
                for(ii=0;ii<4;ii++){
                gotoxy(a3[1][i]+5,a3[0][i]+ii+4);
        for(bb=0;bb<4;bb++){
            if(((ii==1)&&(bb==1))||((ii==1)&&(bb==2))||((ii==2)&&(bb==1))||((ii==2)&&(bb==2))){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),175);
                printf("%c",aa[ii][bb]);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }else{
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
               printf("%c",aa[ii][bb]);
               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }
        }
        printf("\n");
    }
            }else if (a5[i]==2){
                for(ii=0;ii<4;ii++){
                gotoxy(a3[1][i]+5,a3[0][i]+ii+4);
        for(bb=0;bb<4;bb++){
            if(((ii==1)&&(bb==1))||((ii==1)&&(bb==2))||((ii==2)&&(bb==1))||((ii==2)&&(bb==2))){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),207);
                printf("%c",aa[ii][bb]);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }else{
               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
               printf("%c",aa[ii][bb]);
               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }
        }
        printf("\n");
    }

            }
        }

    }
    gotoxy(J+5,f+4);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
     printf("%c",C[f][J]);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

}
void S13(int a[16][17],int a3[2][25],int *r,int *score1,int a5[],int *num,int *score2){
 int l,i,t,b;
 for(i=0;i<16;i+=3){
            l=0;
        for(b=0;b<16;b+=3){
         if((a[i][b+1]==45)&&(a[i+3][b+1]==45)&&(a[i+1][b]==124)&&(a[i+1][b+3]==124)){
           l=0;
           if ((*score1==0)&&(*score2==0)){
                    *score1=*score1+1;
                    a3[0][*r]=i;
                    a3[1][*r]=b;
                    a5[*r]=1;
                    *num=*num-1;
                    *r=*r+1;

                }else {
                for (t=0; t<*r; t++){
                    if ((i==a3[0][t])&&(b==a3[1][t])){
                        l++;
                    }
                }
                if (l==0){
                        a3[0][*r]=i;
                        a3[1][*r]=b;
                        a5[*r]=1;
                        *score1=*score1+1;
                        *num=*num-1;
                        *r=*r+1;
                        if ((*num%2)==0){
                           *num=*num+1;
                          }
                    }
                }

            }
         }
        }
}
void S23(int a[16][17],int a3[2][25],int *r,int *score1,int a5[],int *num,int *score2){
 int l,i,t,b;
 for(i=0;i<16;i+=3){
            l=0;
        for(b=0;b<16;b+=3){
         if((a[i][b+1]==45)&&(a[i+3][b+1]==45)&&(a[i+1][b]==124)&&(a[i+1][b+3]==124)){
           l=0;
           if ((*score1==0)&&(*score2==0)){
                    *score2=*score2+1;
                    a3[0][*r]=i;
                    a3[1][*r]=b;
                    a5[*r]=2;
                    *num=*num-1;
                    *r=*r+1;

                }else {
                for (t=0; t<*r; t++){
                    if ((i==a3[0][t])&&(b==a3[1][t])){
                        l++;
                    }
                }
                if (l==0){
                        a3[0][*r]=i;
                        a3[1][*r]=b;
                        a5[*r]=2;
                        *score2=*score2+1;
                        *num=*num-1;
                        *r=*r+1;
                        if ((*num%2)!=0){
                           *num=*num+1;
                          }
                    }
                }

            }
         }
        }
}
void Undo3(int a6[5][60],int *rr,int *undo,int k,int v,int m,int u,int a[16][17],int a3[2][25],int a5[],int *r,int *score1,int *score2,int *flag,int *num,int *f2,int B[],int *M,int *moves,int *K,int *H){
*f2=0;
int i,b,l=0,P=0,h;
if (*rr!=0){
   *undo=*undo+1;
   *num = *num-1;
   if (a6[4][*rr-1]%2!=0){
    *f2=*f2+1;
    *H=*H-1;
    *moves=*moves+1;
    for (i=2; i<62; i++){
        if (a6[4][*rr-i]%2!=0){
            *f2=*f2+1;
            *H=*H-1;
             *moves=*moves+1;
        }else {
        *f2=*f2+1;
        *K=*K-1;
         *moves=*moves+1;
        break;
        }
    }
   }else {
       *f2=*f2+1;
       *K=*K-1;
        *moves=*moves+1;
   for (i=2; i<62; i++){
        if (a6[4][*rr-i]%2==0){
            *f2=*f2+1;
            *K=*K-1;
             *moves=*moves+1;
        }else {
        break;
        }
   }
   }


   B[*M]=*f2;
   *M=*M+1;

   for (h=0; h<*f2; h++){
        k=a6[0][*rr-1];
        v=a6[1][*rr-1];
        u=a6[2][*rr-1];
        m=a6[3][*rr-1];
        *flag=2;
        *rr=*rr-1;
         if(k==v){
        a[k][m]=a[v][u]=42;
        for(i=k;i<(k+1);i++){
            for(b=u+1;b<(u+3);b++){
                a[i][b]=32;
            }
        }
  }else if(u==m){
        a[k][m]=a[v][u]=42;
        for(b=u;b<(u+1);b++){
            for(i=k+1;i<(k+3);i++){
                a[i][b]=32;
            }

        }
  }
  for(i=0;i<16;i+=3){
            l=0;
        for(b=0;b<16;b+=3){
         if((a[i][b+1]==45)&&(a[i+3][b+1]==45)&&(a[i+1][b]==124)&&(a[i+1][b+3]==124)){
           l=0;
            }else {
            for (P=0; P<25; P++){
                if((a3[0][P]==i)&&(a3[1][P]==b)){
                    a3[0][P]=2;
                    a3[1][P]=2;
                    *r=*r-1;
                    if (a5[P]==1){
                    *score1=*score1-1;
                    }else {
                    *score2=*score2-1;
                    }


                }
            }

            }
         }
        }
   }
   }else {
      gotoxy(0,22);
            printf("Invalid");
            Sleep(500);
            system("cls");
            gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (*num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",a[i][b]);
        }
        printf("\n");
    }

   }
}
void Redo3(int a6[5][60],int *rr,int *undo,int k,int v,int m,int u,int a[16][17],int a3[2][25],int a5[],int *r,int *score1,int *score2,int *flag,int *num,int *f2,int B[],int *M,int *moves,int *K,int *H){
int i,b,t,l=0,h;
*flag=2;
             if (*undo==0){
                printf("do undo first");
            }else {
            for (i=0; i<B[*M-1]; i++){
                if (a6[4][*rr+i]%2==0){
                    *K=*K+1;
                }else {
                *H=*H+1;
                }
            }

            *undo=*undo-1;
            *moves=*moves-B[*M-1];
            for(h=0; h<B[*M-1]; h++){
        k=a6[0][*rr];
        v=a6[1][*rr];
        u=a6[2][*rr];
        m=a6[3][*rr];
        *rr=*rr+1;

        if(k==v){
        a[k][m]=a[v][u]=35;
        for(i=k;i<(k+1);i++){
            for(b=u+1;b<(u+3);b++){
                a[i][b]=45;
            }
        }
  }else if(u==m){
        a[k][m]=a[v][u]=35;
        for(b=u;b<(u+1);b++){
            for(i=k+1;i<(k+3);i++){
                a[i][b]=124;
            }

        }
  }
  for(i=0;i<16;i+=3){
            l=0;
        for(b=0;b<16;b+=3){
         if((a[i][b+1]==45)&&(a[i+3][b+1]==45)&&(a[i+1][b]==124)&&(a[i+1][b+3]==124)){
           l=0;
           if ((*score1==0)&&(*score2==0)){
                    a3[0][*r]=i;
                    a3[1][*r]=b;
                    if (a5[*r]==1){
                        *score1=*score1+1;
                    }else {
                    *score2=*score2+1;
                    }
                    *r=*r+1;

                }else {
                for (t=0; t<25; t++){
                    if ((i==a3[0][t])&&(b==a3[1][t])){
                        l++;
                    }
                }
                if (l==0){
                        a3[0][*r]=i;
                        a3[1][*r]=b;
                        if (a5[*r]==1){
                        *score1=*score1+1;
                        }else {
                        *score2=*score2+1;
                        }
                        *r=*r+1;

                    }
                }

            }
         }
  }
            }
            *M=*M-1;
            *num=*num-1;
            }


}
void p1Vspc_5 (){

    char C[16][17]={{'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*','<'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '}};

    int a[16][17]={{'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '}};

    int aa[4][4]={{'#','-','-','#'},
                  {'|',' ',' ','|'},
                  {'|',' ',' ','|'},
                  {'#','-','-','#'}};;
    int a6[5][60];
    int a7[4][6];
    int GHline[4]={35,45,45,35};
    int GVline[4]={35,124,124,35};
    int a3[2][25];
    int D,T;
    for (D=0; D<2; D++){
        for (T=0; T<25; T++){
            a3[D][T]=1;
        }
    }
    int a5[25];
    for (T=0; T<25; T++){
            a5[T]=0;
        }
    int B[45];
    int ch=0,i,l,b,score1=0,score2=0,x,num,y,v,m,z,n,k,u,q=65,r=0,f=0,temp=0,x1=0,y1=0,flag=0,x2=0,y2=0,undo=0,P=0,f2=0,J=16,rr=0,TEMP,moves=60,K=0,H=0,M=0,U=0;
    time_t start=0, finish=0;

    start = clock();

    hidecursor();

    while (moves!=0){



    for (num=2; num<85; num++){

    if ((num%2)==0){
gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",a[i][b]);
        }
        printf("\n");
    }

    Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);

    while (1){
            if (flag==2||moves==0){
                player1.score = score1;
                pc.score = score2;
                break;
            }

        while(flag!=2){


      ch=0;
  while (ch==0){
       finish = clock();
       if (kbhit()){
        ch=getch();
       }
  Sleep(10);
      k=(((finish - start)) / CLOCKS_PER_SEC);
     gotoxy(30,7);
     printf("time : %d%d : %d%d                  ",(k/60)/10,(k/60)%10,(k%60)/10,k%10);
     gotoxy(0,1);
  }

  if ((ch!=13)&&(ch!=117)&&(ch!=114)&&(ch!=115)&&(ch!=27)){

  Arrows3(ch,a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,&f,&J,start,finish,num,moves,K,H);
  }else if (ch==13){
  Detect_Check3(&flag,J,f,start,finish,&x1,&y1,&x2,&y2,a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,num,moves,K,H);
  if (flag==2){
    K++;
  }
  }else if (ch==117){
         Undo3(a6,&rr,&undo,k,v,m,u,a,a3,a5,&r,&score1,&score2,&flag,&num,&f2,B,&M,&moves,&K,&H);
        finish = clock();
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        }else if ((ch==114)&&(undo!=0)){
            Redo3(a6,&rr,&undo,k,v,m,u,a,a3,a5,&r,&score1,&score2,&flag,&num,&f2,B,&M,&moves,&K,&H);
         finish = clock();
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        }else if (ch==115){
           gotoxy(40,9);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            printf("(1) SAVE1");
            gotoxy(40,11);
            printf("(2) SAVE2");
            gotoxy(40,13);
            printf("(3) SAVE3");
            char choi=getch();
            while((choi!='1') && (choi!='2') && (choi!='3')){
                gotoxy(40,15);
                printf("PLS ENTER 1 or 2 or 3");
                choi = getch();
            }
                gotoxy(40,15);
                printf("                     ");
            if(choi=='1'){
                save13(a,rr,a6,r,a3,C,a5,J,f,score1,score2,finish,K,H,moves);
                Sleep(500);
                gotoxy(40,15);
                printf("                                                    ");
                gotoxy(40,9);
                printf("         ");
                gotoxy(40,11);
                printf("         ");
                gotoxy(40,13);
                printf("         ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }else if(choi=='2'){
                save23(a,rr,a6,r,a3,C,a5,J,f,score1,score2,finish,K,H,moves);
                Sleep(500);
                gotoxy(40,15);
                printf("                                                    ");
                gotoxy(40,9);
                printf("         ");
                gotoxy(40,11);
                printf("         ");
                gotoxy(40,13);
                printf("         ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }else if(choi=='3'){
                save33(a,rr,a6,r,a3,C,a5,J,f,score1,score2,finish,K,H,moves);
                Sleep(500);
                gotoxy(40,15);
                printf("                                                    ");
                gotoxy(40,9);
                printf("         ");
                gotoxy(40,11);
                printf("         ");
                gotoxy(40,13);
                printf("         ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }
        }else if(ch==27){
            gotoxy(40,9);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            printf("ANY UNSAVED DATA WILL BE LOST IF YOU EXIT! (y/n)");
             char chii=getch();

             while((chii!='y')&&(chii!='n')){
             gotoxy(40,7);
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
             printf("CAN YOU PRESS SMALL y OR n!");
             chii=getch();
              }
              gotoxy(40,7);
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
             printf("                           ");

             if(chii=='y'){
             gotoxy(40,9);
             printf("                                                ");
             return;

             }else if(chii=='n'){
             gotoxy(40,9);
             printf("                                                ");
             }
        }else if (undo==0){
            gotoxy(0,22);
            printf("You can't do Redo without Undo");
            Sleep(500);
            system("cls");
            gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",a[i][b]);
        }
        printf("\n");
    }
            Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        }
        }
        }
    flag=0;
if (ch==13&&moves!=0){
undo = 0;
Drawing3(x1,x2,y1,y2,&rr,a,a6,&moves,num);
    }
    S13(a,a3,&r,&score1,a5,&num,&score2);
    if(moves==0){
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        player1.score = score1;
        pc.score = score2;
        break;
    }
    }else {
         M=0;
        x1=0; x2=0; y1=0; y2=0;
        gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",a[i][b]);
        }
        printf("\n");
    }
     Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
   AI1(moves,&x1,&x2,&y1,&y2,a,&finish,start);

undo = 0;
if(moves!=0){
H++;
 Drawing3(x1,x2,y1,y2,&rr,a,a6,&moves,num);
}
    S23(a,a3,&r,&score1,a5,&num,&score2);
    if(moves==0){
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        player1.score = score1;
        pc.score = score2;
        break;
    }
    }
    }
    }
}
void Arrows3(int ch,int a6[5][60],char C[16][17],int a[16][17],int GHline[],int GVline[],int a5[],int a3[2][25],int aa[4][4],int rr,int score1,int score2,int r,int *f,int *J,time_t start,time_t finish, int num,int moves,int K,int H){
 int temp;
 if (ch == 0 || ch == 224)
  {
    switch (getch ())
    {
        case 80:
    if(C[15][*J]!='<'){
            temp=C[*f][*J];
            C[*f][*J]=C[*f+3][*J];
            C[*f+3][*J]=temp;
            gotoxy(*J+5,*f+4);
            printf(" ");
            *f+=3;
            finish = clock()+(timee.hhh/2);
            }else{
            temp=C[15][*J];
            C[15][*J]=C[0][*J];
            C[0][*J]=temp;
            gotoxy(*J+5,*f+4);
            printf(" ");
            *f=0;
            finish = clock()+(timee.hhh/2);
            }
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,*f,*J,start,finish,num,moves,K,H);

            break;
             case 72:
            if(C[0][*J]!='<'){
            temp=C[*f][*J];
            C[*f][*J]=C[*f-3][*J];
            C[*f-3][*J]=temp;
            gotoxy(*J+5,*f+4);
            printf(" ");
            *f-=3;
            finish = clock()+(timee.hhh/2);
            }else{
            temp=C[15][*J];
            C[15][*J]=C[0][*J];
            C[0][*J]=temp;
            gotoxy(*J+5,*f+4);
            printf(" ");
            *f=15;
            finish = clock()+(timee.hhh/2);
            }
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,*f,*J,start,finish,num,moves,K,H);
        //printing the new shape.

            break;
        case 75:
            if(C[*f][1]!='<'){
            temp=C[*f][*J];
            C[*f][*J]=C[*f][*J-3];
            C[*f][*J-3]=temp;
            gotoxy(*J+5,*f+4);
            printf(" ");
            *J-=3;
            finish = clock()+(timee.hhh/2);
            }else{
            temp=C[*f][16];
            C[*f][16]=C[*f][1];
            C[*f][1]=temp;
            gotoxy(*J+5,*f+4);
            printf(" ");
            *J=16;
            finish = clock()+(timee.hhh/2);
            }
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,*f,*J,start,finish,num,moves,K,H);
        break;
      case 77:
            if(C[*f][16]!='<'){
            temp=C[*f][*J];
            C[*f][*J]=C[*f][*J+3];
            C[*f][*J+3]=temp;
            gotoxy(*J+5,*f+4);
            printf(" ");
            *J+=3;
            finish = clock()+(timee.hhh/2);
            }else{
            temp=C[*f][16];
            C[*f][16]=C[*f][1];
            C[*f][1]=temp;
            gotoxy(*J+5,*f+4);
            printf(" ");
            *J=1;
            finish = clock()+(timee.hhh/2);
            }
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,*f,*J,start,finish,num,moves,K,H);
        break;

    }


}
}
void Detect_Check3(int *flag,int J,int f,time_t start,time_t finish,int *x1,int *y1,int *x2,int *y2,int a6[5][60],char C[16][17],int a[16][17],int GHline[],int GVline[],int a5[],int a3[2][25],int aa[4][4],int rr,int score1,int score2,int r,int num,int moves,int K,int H){
int TEMP,i,b;

if(*flag==0){
      *y1=J-1;
      *x1=f;
      *flag=1;
      finish = clock()+(timee.hhh/2);
      Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
         }else{
         *y2=J-1;
         *x2=f;
         *flag=2;
         finish = clock()+(timee.hhh/2);

         if (((*x1==*x2)&&(*y1==*y2)) || ((*x1!=*x2)&&(*y1!=*y2))){
            gotoxy(0,22);
            printf("Invalid");
            *flag=0;
            Sleep(500);
            system("cls");
            gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",a[i][b]);
        }
        printf("\n");
    }
            Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
         }
         if (*x1==*x2){
            if (*y1>*y2){
            TEMP=*y2;
            *y2=*y1;
            *y1=TEMP;
         }
            if (a[*x1][*y1+1]==45){
            gotoxy(0,22);
            printf("Invalid");
            *flag=0;
            Sleep(500);
            system("cls");
            gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",a[i][b]);
        }
        printf("\n");
    }
            Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
            }
         }else if (*y1==*y2){
         if (*x1>*x2){
            TEMP=*x2;
            *x2=*x1;
            *x1=TEMP;
         }
         if (a[*x1+1][*y1]==124){
            gotoxy(0,22);
            printf("Invalid");
            *flag=0;
            Sleep(500);
            system("cls");
            gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",a[i][b]);
        }
        printf("\n");
    }
            Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
         }
         }
         if ((*x1==*x2)&&(*y1!=*y2)){
            if (abs(*y2-*y1)>3){
                gotoxy(0,22);
            printf("Invalid");
            *flag=0;
            Sleep(500);
            system("cls");
            gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",a[i][b]);
        }
        printf("\n");
    }
            Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
            }
         }
        if ((*y1==*y2)&&(*x1!=*x2)){
            if (abs(*x2-*x1)>3){
                gotoxy(0,22);
            printf("Invalid");
            *flag=0;
            Sleep(500);
            system("cls");
            gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",a[i][b]);
        }
        printf("\n");
    }
            Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
            }
         }


         }

}
void Drawing3(int x1,int x2,int y1,int y2,int *rr,int a[16][17],int a6[5][60],int *moves,int num){
int x,y,n,z,l,u,v,m,k,i,b;
  x=x1;
  y=x2;
  n=y1;
  z=y2;
    if(y<x){
        l=x;
        x=y;
        y=l;
    }
    if (n>z){
        l=n;
        n=z;
        z=l;
    }
        k=x;
        u=n;
        v=y;
        m=z;
   if(x==y){
        a[k][m]=a[v][u]=35;
        k=x;
        u=n;
        for(i=k;i<(k+1);i++){
                *moves=*moves-1;
            for(b=u+1;b<(u+3);b++){
                a[i][b]=45;
            }
        }
        a6[0][*rr]=k;
        a6[1][*rr]=v;
        a6[2][*rr]=u;
        a6[3][*rr]=m;
        a6[4][*rr]=num;
        *rr=*rr+1;
    }else if(n==z){
        a[k][m]=a[v][u]=35;
        k=x;
        u=n;
        for(b=u;b<(u+1);b++){
                *moves=*moves-1;
            for(i=k+1;i<(k+3);i++){
                a[i][b]=124;
            }

        }
        a6[0][*rr]=k;
        a6[1][*rr]=v;
        a6[2][*rr]=u;
        a6[3][*rr]=m;
        a6[4][*rr]=num;
        *rr=*rr+1;
}
}
void save13(int a[16][17],int rr,int a6[5][60],int r,int a3[2][25],char C[16][17],int a5[],int J,int f,int score1,int score2,int finish,int K,int H, int moves){
 int i,b;
        FILE* fptr = fopen("saved1.txt","r");
        if(fptr==NULL){
        FILE* fptr = fopen("saved1.txt","w");
        fprintf(fptr , "4\n");
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fprintf(fptr ,"%d ",a[i][b]);
            }
        }
        fprintf(fptr , "\n%d\n" , rr);
        for(i=0 ; i<5 ; i++){
            for(b=0 ; b<rr ; b++){
                fprintf(fptr ,"%d ",a6[i][b]);
            }
        }
        fprintf(fptr , "\n%d\n" ,r);
        for(i=0 ; i<2 ; i++){
            for(b=0 ; b<r ; b++){
                fprintf(fptr ,"%d ",a3[i][b]);
            }
        }
        fprintf(fptr , "\n");
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fprintf(fptr ,"%d ",C[i][b]);
            }
        }
        fprintf(fptr , "\n");
        for(i=0 ; i<r ; i++){
          fprintf(fptr ,"%d ",a5[i]);
        }
        fprintf(fptr , "\n%d" , J);
        fprintf(fptr , "\n%d" , f);
        fprintf(fptr , "\n%d" , score1);
        fprintf(fptr , "\n%d" , score2);
        fprintf(fptr , "\n%d" , finish);
        fprintf(fptr , "\n%d" , K);
        fprintf(fptr , "\n%d" , H);
        fprintf(fptr , "\n%d" , moves);
        fprintf(fptr , "\n%s" , player1.name);
        gotoxy(40,15);
        printf("SAVE COMPLETE");
        fclose(fptr);
        }else{
        gotoxy(40,15);
        printf("ARE YOU SURE YOU WANT TO OVER WRITE THIS SAVE! (y/n)");
        char chh = getch();
        while((chh!='y')&&(chh!='n')){
        gotoxy(40,16);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
        gotoxy(40,16);
        printf("                       ");
        if(chh=='y'){
        FILE* fptr = fopen("saved1.txt","w");
        fprintf(fptr , "4\n");
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fprintf(fptr ,"%d ",a[i][b]);
            }
        }
        fprintf(fptr , "\n%d\n" , rr);
        for(i=0 ; i<5 ; i++){
            for(b=0 ; b<rr ; b++){
                fprintf(fptr ,"%d ",a6[i][b]);
            }
        }
        fprintf(fptr , "\n%d\n" ,r);
        for(i=0 ; i<2 ; i++){
            for(b=0 ; b<r ; b++){
                fprintf(fptr ,"%d ",a3[i][b]);
            }
        }
        fprintf(fptr , "\n");
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fprintf(fptr ,"%d ",C[i][b]);
            }
        }
        fprintf(fptr , "\n");
        for(i=0 ; i<r ; i++){
          fprintf(fptr ,"%d ",a5[i]);
        }
        fprintf(fptr , "\n%d" , J);
        fprintf(fptr , "\n%d" , f);
        fprintf(fptr , "\n%d" , score1);
        fprintf(fptr , "\n%d" , score2);
        fprintf(fptr , "\n%d" , finish);
        fprintf(fptr , "\n%d" , K);
        fprintf(fptr , "\n%d" , H);
        fprintf(fptr , "\n%d" , moves);
        fprintf(fptr , "\n%s" , player1.name);
        gotoxy(40,15);
        printf("                                                    ");
        gotoxy(40,15);
        printf("SAVE COMPLETE");
        fclose(fptr);
        }else if(chh=='n'){
        gotoxy(40,15);
        printf("                                                    ");
        gotoxy(40,15);
        printf("GOT IT NO SAVE ;)");
        fclose(fptr);
        }
        }
        fclose(fptr);
}
void save23(int a[16][17],int rr,int a6[5][60],int r,int a3[2][25],char C[16][17],int a5[],int J,int f,int score1,int score2,int finish,int K,int H, int moves){
 int i,b;
        FILE* fptr = fopen("saved2.txt","r");
        if(fptr==NULL){
        FILE* fptr = fopen("saved2.txt","w");
        fprintf(fptr , "4\n");
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fprintf(fptr ,"%d ",a[i][b]);
            }
        }
        fprintf(fptr , "\n%d\n" , rr);
        for(i=0 ; i<5 ; i++){
            for(b=0 ; b<rr ; b++){
                fprintf(fptr ,"%d ",a6[i][b]);
            }
        }
        fprintf(fptr , "\n%d\n" ,r);
        for(i=0 ; i<2 ; i++){
            for(b=0 ; b<r ; b++){
                fprintf(fptr ,"%d ",a3[i][b]);
            }
        }
        fprintf(fptr , "\n");
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fprintf(fptr ,"%d ",C[i][b]);
            }
        }
        fprintf(fptr , "\n");
        for(i=0 ; i<r ; i++){
          fprintf(fptr ,"%d ",a5[i]);
        }
        fprintf(fptr , "\n%d" , J);
        fprintf(fptr , "\n%d" , f);
        fprintf(fptr , "\n%d" , score1);
        fprintf(fptr , "\n%d" , score2);
        fprintf(fptr , "\n%d" , finish);
        fprintf(fptr , "\n%d" , K);
        fprintf(fptr , "\n%d" , H);
        fprintf(fptr , "\n%d" , moves);
        fprintf(fptr , "\n%s" , player1.name);
        gotoxy(40,15);
        printf("SAVE COMPLETE");
        fclose(fptr);
        }else{
        gotoxy(40,15);
        printf("ARE YOU SURE YOU WANT TO OVER WRITE THIS SAVE! (y/n)");
        char chh = getch();
        while((chh!='y')&&(chh!='n')){
        gotoxy(40,16);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
        gotoxy(40,16);
        printf("                       ");
        if(chh=='y'){
        FILE* fptr = fopen("saved2.txt","w");
        fprintf(fptr , "4\n");
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fprintf(fptr ,"%d ",a[i][b]);
            }
        }
        fprintf(fptr , "\n%d\n" , rr);
        for(i=0 ; i<5 ; i++){
            for(b=0 ; b<rr ; b++){
                fprintf(fptr ,"%d ",a6[i][b]);
            }
        }
        fprintf(fptr , "\n%d\n" ,r);
        for(i=0 ; i<2 ; i++){
            for(b=0 ; b<r ; b++){
                fprintf(fptr ,"%d ",a3[i][b]);
            }
        }
        fprintf(fptr , "\n");
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fprintf(fptr ,"%d ",C[i][b]);
            }
        }
        fprintf(fptr , "\n");
        for(i=0 ; i<r ; i++){
          fprintf(fptr ,"%d ",a5[i]);
        }
        fprintf(fptr , "\n%d" , J);
        fprintf(fptr , "\n%d" , f);
        fprintf(fptr , "\n%d" , score1);
        fprintf(fptr , "\n%d" , score2);
        fprintf(fptr , "\n%d" , finish);
        fprintf(fptr , "\n%d" , K);
        fprintf(fptr , "\n%d" , H);
        fprintf(fptr , "\n%d" , moves);
        fprintf(fptr , "\n%s" , player1.name);
        gotoxy(40,15);
        printf("                                                    ");
        gotoxy(40,15);
        printf("SAVE COMPLETE");
        fclose(fptr);
        }else if(chh=='n'){
        gotoxy(40,15);
        printf("                                                    ");
        gotoxy(40,15);
        printf("GOT IT NO SAVE ;)");
        fclose(fptr);
        }
        }
        fclose(fptr);
}
void save33(int a[16][17],int rr,int a6[5][60],int r,int a3[2][25],char C[16][17],int a5[],int J,int f,int score1,int score2,int finish,int K,int H, int moves){
 int i,b;
        FILE* fptr = fopen("saved3.txt","r");
        if(fptr==NULL){
        FILE* fptr = fopen("saved3.txt","w");
        fprintf(fptr , "4\n");
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fprintf(fptr ,"%d ",a[i][b]);
            }
        }
        fprintf(fptr , "\n%d\n" , rr);
        for(i=0 ; i<5 ; i++){
            for(b=0 ; b<rr ; b++){
                fprintf(fptr ,"%d ",a6[i][b]);
            }
        }
        fprintf(fptr , "\n%d\n" ,r);
        for(i=0 ; i<2 ; i++){
            for(b=0 ; b<r ; b++){
                fprintf(fptr ,"%d ",a3[i][b]);
            }
        }
        fprintf(fptr , "\n");
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fprintf(fptr ,"%d ",C[i][b]);
            }
        }
        fprintf(fptr , "\n");
        for(i=0 ; i<r ; i++){
          fprintf(fptr ,"%d ",a5[i]);
        }
        fprintf(fptr , "\n%d" , J);
        fprintf(fptr , "\n%d" , f);
        fprintf(fptr , "\n%d" , score1);
        fprintf(fptr , "\n%d" , score2);
        fprintf(fptr , "\n%d" , finish);
        fprintf(fptr , "\n%d" , K);
        fprintf(fptr , "\n%d" , H);
        fprintf(fptr , "\n%d" , moves);
        fprintf(fptr , "\n%s" , player1.name);
        gotoxy(40,15);
        printf("SAVE COMPLETE");
        fclose(fptr);
        }else{
        gotoxy(40,15);
        printf("ARE YOU SURE YOU WANT TO OVER WRITE THIS SAVE! (y/n)");
        char chh = getch();
        while((chh!='y')&&(chh!='n')){
        gotoxy(40,16);
        printf("PLS PRESS SMALL y or n!");
        chh = getch();
        }
        gotoxy(40,16);
        printf("                       ");
        if(chh=='y'){
        FILE* fptr = fopen("saved3.txt","w");
        fprintf(fptr , "4\n");
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fprintf(fptr ,"%d ",a[i][b]);
            }
        }
        fprintf(fptr , "\n%d\n" , rr);
        for(i=0 ; i<5 ; i++){
            for(b=0 ; b<rr ; b++){
                fprintf(fptr ,"%d ",a6[i][b]);
            }
        }
        fprintf(fptr , "\n%d\n" ,r);
        for(i=0 ; i<2 ; i++){
            for(b=0 ; b<r ; b++){
                fprintf(fptr ,"%d ",a3[i][b]);
            }
        }
        fprintf(fptr , "\n");
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fprintf(fptr ,"%d ",C[i][b]);
            }
        }
        fprintf(fptr , "\n");
        for(i=0 ; i<r ; i++){
          fprintf(fptr ,"%d ",a5[i]);
        }
        fprintf(fptr , "\n%d" , J);
        fprintf(fptr , "\n%d" , f);
        fprintf(fptr , "\n%d" , score1);
        fprintf(fptr , "\n%d" , score2);
        fprintf(fptr , "\n%d" , finish);
        fprintf(fptr , "\n%d" , K);
        fprintf(fptr , "\n%d" , H);
        fprintf(fptr , "\n%d" , moves);
        fprintf(fptr , "\n%s" , player1.name);
        gotoxy(40,15);
        printf("                                                    ");
        gotoxy(40,15);
        printf("SAVE COMPLETE");
        fclose(fptr);
        }else if(chh=='n'){
        gotoxy(40,15);
        printf("                                                    ");
        gotoxy(40,15);
        printf("GOT IT NO SAVE ;)");
        fclose(fptr);
        }
        }
        fclose(fptr);
}
void p1Vspc_5_load1 (){

    char C[16][17]={{'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*','<'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '}};

    int a[16][17]={{'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '}};

    int aa[4][4]={{'#','-','-','#'},
                  {'|',' ',' ','|'},
                  {'|',' ',' ','|'},
                  {'#','-','-','#'}};;
    int a6[5][60];
    int a7[4][6];
    int GHline[4]={35,45,45,35};
    int GVline[4]={35,124,124,35};
    int a3[2][25];
    int D,T;
    for (D=0; D<2; D++){
        for (T=0; T<25; T++){
            a3[D][T]=1;
        }
    }
    int a5[25];
    for (T=0; T<25; T++){
            a5[T]=0;
        }
    int B[45];
    int ch=0,i,l,b,score1=0,score2=0,x,num,y,v,m,z,n,k,u,q=65,r=0,f=0,temp=0,x1=0,y1=0,flag=0,x2=0,y2=0,undo=0,P=0,f2=0,J=16,rr=0,TEMP,moves=60,K=0,H=0,M=0,U=0;
    time_t start=0, finish=0;
 start = clock();
   load11(a,&rr,a6,&r,a3,C,a5,&J,&f,&score1,&score2,&finish,&K,&H,&moves);
   finish=clock()+timee.hhh;
   Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
   int YY;
   YY=rr;

    hidecursor();

    while (moves!=0){


    for (num=2; num<85; num++){

    if ((num%2)==0){
gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",C[i][b]);
        }
        printf("\n");
    }

    Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);

    while (1){
            if (flag==2||moves==0){
                player1.score = score1;
                pc.score = score2;
                break;
            }

        while(flag!=2){


      ch=0;
  while (ch==0){
       finish = clock()+(timee.hhh/2);
       if (kbhit()){
        ch=getch();
       }
  Sleep(10);
      k=(((finish - start)) / CLOCKS_PER_SEC);
     gotoxy(30,7);
     printf("time : %d%d : %d%d                ",(k/60)/10,(k/60)%10,(k%60)/10,k%10);
     gotoxy(0,1);
  }

  if ((ch!=13)&&(ch!=117)&&(ch!=114)&&(ch!=115)&&(ch!=27)){

  Arrows3(ch,a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,&f,&J,start,finish,num,moves,K,H);
  }else if (ch==13){
  Detect_Check3(&flag,J,f,start,finish,&x1,&y1,&x2,&y2,a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,num,moves,K,H);
  if (flag==2){
    K++;
  }
  }else if ((ch==117)&&(YY!=rr)){
         Undo3(a6,&rr,&undo,k,v,m,u,a,a3,a5,&r,&score1,&score2,&flag,&num,&f2,B,&M,&moves,&K,&H);
        finish = clock()+(timee.hhh/2);
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
  }else if ((ch==117)&&(YY==rr)){
      gotoxy(0,22);
      printf("There is not Undo when you load file :(");
      Sleep(300);
      gotoxy(0,22);
      printf("                                         ");
      finish = clock()+(timee.hhh/2);
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        }else if ((ch==114)&&(undo!=0)){
            Redo3(a6,&rr,&undo,k,v,m,u,a,a3,a5,&r,&score1,&score2,&flag,&num,&f2,B,&M,&moves,&K,&H);
         finish = clock()+(timee.hhh/2);
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        }else if (ch==115){
           gotoxy(40,9);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            printf("(1) SAVE1");
            gotoxy(40,11);
            printf("(2) SAVE2");
            gotoxy(40,13);
            printf("(3) SAVE3");
            char choi=getch();
            while((choi!='1') && (choi!='2') && (choi!='3')){
                gotoxy(40,15);
                printf("PLS ENTER 1 or 2 or 3");
                choi = getch();
            }
                gotoxy(40,15);
                printf("                     ");
            if(choi=='1'){
                save13(a,rr,a6,r,a3,C,a5,J,f,score1,score2,finish,K,H,moves);
                Sleep(500);
                gotoxy(40,15);
                printf("                                                    ");
                gotoxy(40,9);
                printf("         ");
                gotoxy(40,11);
                printf("         ");
                gotoxy(40,13);
                printf("         ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }else if(choi=='2'){
                save23(a,rr,a6,r,a3,C,a5,J,f,score1,score2,finish,K,H,moves);
                Sleep(500);
                gotoxy(40,15);
                printf("                                                    ");
                gotoxy(40,9);
                printf("         ");
                gotoxy(40,11);
                printf("         ");
                gotoxy(40,13);
                printf("         ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }else if(choi=='3'){
                save33(a,rr,a6,r,a3,C,a5,J,f,score1,score2,finish,K,H,moves);
                Sleep(500);
                gotoxy(40,15);
                printf("                                                    ");
                gotoxy(40,9);
                printf("         ");
                gotoxy(40,11);
                printf("         ");
                gotoxy(40,13);
                printf("         ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }
        }else if(ch==27){
            gotoxy(40,9);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            printf("ANY UNSAVED DATA WILL BE LOST IF YOU EXIT! (y/n)");
             char chii=getch();

             while((chii!='y')&&(chii!='n')){
             gotoxy(40,7);
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
             printf("CAN YOU PRESS SMALL y OR n!");
             chii=getch();
              }
              gotoxy(40,7);
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
             printf("                           ");

             if(chii=='y'){
             gotoxy(40,9);
             printf("                                                ");
             return;

             }else if(chii=='n'){
             gotoxy(40,9);
             printf("                                                ");
             }
        }else if (undo==0){
            gotoxy(0,22);
            printf("You can't do Redo without Undo");
            Sleep(500);
            system("cls");
            gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",C[i][b]);
        }
        printf("\n");
    }
            Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        }
        }
        }
    flag=0;
if (ch==13&&moves!=0){
undo = 0;
Drawing3(x1,x2,y1,y2,&rr,a,a6,&moves,num);
    }
    S13(a,a3,&r,&score1,a5,&num,&score2);
    if(moves==0){
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        player1.score = score1;
        pc.score = score2;
        break;
    }
    }else {
         M=0;
        x1=0; x2=0; y1=0; y2=0;
        gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",a[i][b]);
        }
        printf("\n");
    }
     Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
AI1(moves,&x1,&x2,&y1,&y2,a,&finish,start);

undo = 0;
if(moves!=0){
H++;
 Drawing3(x1,x2,y1,y2,&rr,a,a6,&moves,num);
}
    S23(a,a3,&r,&score1,a5,&num,&score2);
    if(moves==0){
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        player1.score = score1;
        pc.score = score2;
        break;
    }
    }
    }
    }
}
void p1Vspc_5_load2 (){

    char C[16][17]={{'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*','<'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '}};

    int a[16][17]={{'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '}};

    int aa[4][4]={{'#','-','-','#'},
                  {'|',' ',' ','|'},
                  {'|',' ',' ','|'},
                  {'#','-','-','#'}};;
    int a6[5][60];
    int a7[4][6];
    int GHline[4]={35,45,45,35};
    int GVline[4]={35,124,124,35};
    int a3[2][25];
    int D,T;
    for (D=0; D<2; D++){
        for (T=0; T<25; T++){
            a3[D][T]=1;
        }
    }
    int a5[25];
    for (T=0; T<25; T++){
            a5[T]=0;
        }
    int B[45];
    int ch=0,i,l,b,score1=0,score2=0,x,num,y,v,m,z,n,k,u,q=65,r=0,f=0,temp=0,x1=0,y1=0,flag=0,x2=0,y2=0,undo=0,P=0,f2=0,J=16,rr=0,TEMP,moves=60,K=0,H=0,M=0,U=0;
    time_t start=0, finish=0;
    start = clock();
   load22(a,&rr,a6,&r,a3,C,a5,&J,&f,&score1,&score2,&finish,&K,&H,&moves);
   finish=clock()+timee.hhh;
   Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
     int YY;
   YY=rr;

    hidecursor();

    while (moves!=0){



    for (num=2; num<85; num++){

    if ((num%2)==0){
gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",C[i][b]);
        }
        printf("\n");
    }

    Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);

    while (1){
            if (flag==2||moves==0){
                player1.score = score1;
                pc.score = score2;
                break;
            }

        while(flag!=2){


      ch=0;
  while (ch==0){
       finish = clock()+(timee.hhh/2);
       if (kbhit()){
        ch=getch();
       }
  Sleep(10);
      k=(((finish - start)) / CLOCKS_PER_SEC);
     gotoxy(30,7);
     printf("time : %d%d : %d%d                ",(k/60)/10,(k/60)%10,(k%60)/10,k%10);
     gotoxy(0,1);
  }

  if ((ch!=13)&&(ch!=117)&&(ch!=114)&&(ch!=115)&&(ch!=27)){

  Arrows3(ch,a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,&f,&J,start,finish,num,moves,K,H);
  }else if (ch==13){
  Detect_Check3(&flag,J,f,start,finish,&x1,&y1,&x2,&y2,a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,num,moves,K,H);
  if (flag==2){
    K++;
  }
  }else if ((ch==117)&&(YY!=rr)){
         Undo3(a6,&rr,&undo,k,v,m,u,a,a3,a5,&r,&score1,&score2,&flag,&num,&f2,B,&M,&moves,&K,&H);
        finish = clock()+(timee.hhh/2);
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
  }else if ((ch==117)&&(YY==rr)){
      gotoxy(0,22);
      printf("There is not Undo when you load file :(");
      Sleep(300);
      gotoxy(0,22);
      printf("                                         ");
      finish = clock()+(timee.hhh/2);
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        }else if ((ch==114)&&(undo!=0)){
            Redo3(a6,&rr,&undo,k,v,m,u,a,a3,a5,&r,&score1,&score2,&flag,&num,&f2,B,&M,&moves,&K,&H);
         finish = clock()+(timee.hhh/2);
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        }else if (ch==115){
           gotoxy(40,9);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            printf("(1) SAVE1");
            gotoxy(40,11);
            printf("(2) SAVE2");
            gotoxy(40,13);
            printf("(3) SAVE3");
            char choi=getch();
            while((choi!='1') && (choi!='2') && (choi!='3')){
                gotoxy(40,15);
                printf("PLS ENTER 1 or 2 or 3");
                choi = getch();
            }
                gotoxy(40,15);
                printf("                     ");
            if(choi=='1'){
                save13(a,rr,a6,r,a3,C,a5,J,f,score1,score2,finish,K,H,moves);
                Sleep(500);
                gotoxy(40,15);
                printf("                                                    ");
                gotoxy(40,9);
                printf("         ");
                gotoxy(40,11);
                printf("         ");
                gotoxy(40,13);
                printf("         ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }else if(choi=='2'){
                save23(a,rr,a6,r,a3,C,a5,J,f,score1,score2,finish,K,H,moves);
                Sleep(500);
                gotoxy(40,15);
                printf("                                                    ");
                gotoxy(40,9);
                printf("         ");
                gotoxy(40,11);
                printf("         ");
                gotoxy(40,13);
                printf("         ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }else if(choi=='3'){
                save33(a,rr,a6,r,a3,C,a5,J,f,score1,score2,finish,K,H,moves);
                Sleep(500);
                gotoxy(40,15);
                printf("                                                    ");
                gotoxy(40,9);
                printf("         ");
                gotoxy(40,11);
                printf("         ");
                gotoxy(40,13);
                printf("         ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }
        }else if(ch==27){
            gotoxy(40,9);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            printf("ANY UNSAVED DATA WILL BE LOST IF YOU EXIT! (y/n)");
             char chii=getch();

             while((chii!='y')&&(chii!='n')){
             gotoxy(40,7);
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
             printf("CAN YOU PRESS SMALL y OR n!");
             chii=getch();
              }
              gotoxy(40,7);
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
             printf("                           ");

             if(chii=='y'){
             gotoxy(40,9);
             printf("                                                ");
             return;

             }else if(chii=='n'){
             gotoxy(40,9);
             printf("                                                ");
             }
        }else if (undo==0){
            gotoxy(0,22);
            printf("You can't do Redo without Undo");
            Sleep(500);
            system("cls");
            gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",C[i][b]);
        }
        printf("\n");
    }
            Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        }
        }
        }
    flag=0;
if (ch==13&&moves!=0){
undo = 0;
Drawing3(x1,x2,y1,y2,&rr,a,a6,&moves,num);
    }
    S13(a,a3,&r,&score1,a5,&num,&score2);
    if(moves==0){
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        player1.score = score1;
        pc.score = score2;
        break;
    }
    }else {
 M=0;
        x1=0; x2=0; y1=0; y2=0;
        gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",a[i][b]);
        }
        printf("\n");
    }
     Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
   AI1(moves,&x1,&x2,&y1,&y2,a,&finish,start);

undo = 0;
if(moves!=0){
H++;
 Drawing3(x1,x2,y1,y2,&rr,a,a6,&moves,num);
}
    S23(a,a3,&r,&score1,a5,&num,&score2);
    if(moves==0){
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        player1.score = score1;
        pc.score = score2;
        break;
    }
    }
    }
    }
}
void p1Vspc_5_load3 (){

    char C[16][17]={{'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*','<'},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                    {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '}};

    int a[16][17]={{'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                   {'*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ','*',' '}};

    int aa[4][4]={{'#','-','-','#'},
                  {'|',' ',' ','|'},
                  {'|',' ',' ','|'},
                  {'#','-','-','#'}};;
    int a6[5][60];
    int a7[4][6];
    int GHline[4]={35,45,45,35};
    int GVline[4]={35,124,124,35};
    int a3[2][25];
    int D,T;
    for (D=0; D<2; D++){
        for (T=0; T<25; T++){
            a3[D][T]=1;
        }
    }
    int a5[25];
    for (T=0; T<25; T++){
            a5[T]=0;
        }
    int B[45];
    int ch=0,i,l,b,score1=0,score2=0,x,num,y,v,m,z,n,k,u,q=65,r=0,f=0,temp=0,x1=0,y1=0,flag=0,x2=0,y2=0,undo=0,P=0,f2=0,J=16,rr=0,TEMP,moves=60,K=0,H=0,M=0,U=0;
    time_t start=0, finish=0;
start = clock();
   load33(a,&rr,a6,&r,a3,C,a5,&J,&f,&score1,&score2,&finish,&K,&H,&moves);
   finish=clock()+timee.hhh;
   Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
     int YY;
   YY=rr;

    hidecursor();

    while (moves!=0){


    for (num=2; num<85; num++){

    if ((num%2)==0){
gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",C[i][b]);
        }
        printf("\n");
    }

    Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);

    while (1){
            if (flag==2||moves==0){
                player1.score = score1;
                pc.score = score2;
                break;
            }

        while(flag!=2){


      ch=0;
  while (ch==0){
       finish = clock()+(timee.hhh/2);
       if (kbhit()){
        ch=getch();
       }
  Sleep(10);
      k=(((finish - start)) / CLOCKS_PER_SEC);
     gotoxy(30,7);
     printf("time : %d%d : %d%d                    ",(k/60)/10,(k/60)%10,(k%60)/10,k%10);
     gotoxy(0,1);
  }

  if ((ch!=13)&&(ch!=117)&&(ch!=114)&&(ch!=115)&&(ch!=27)){

  Arrows3(ch,a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,&f,&J,start,finish,num,moves,K,H);
  }else if (ch==13){
  Detect_Check3(&flag,J,f,start,finish,&x1,&y1,&x2,&y2,a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,num,moves,K,H);
  if (flag==2){
    K++;
  }
  }else if ((ch==117)&&(YY!=rr)){
         Undo3(a6,&rr,&undo,k,v,m,u,a,a3,a5,&r,&score1,&score2,&flag,&num,&f2,B,&M,&moves,&K,&H);
        finish = clock()+(timee.hhh/2);
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
  }else if ((ch==117)&&(YY==rr)){
      gotoxy(0,22);
      printf("There is not Undo when you load file :(");
      Sleep(300);
      gotoxy(0,22);
      printf("                                         ");
      finish = clock()+(timee.hhh/2);
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        }else if ((ch==114)&&(undo!=0)){
            Redo3(a6,&rr,&undo,k,v,m,u,a,a3,a5,&r,&score1,&score2,&flag,&num,&f2,B,&M,&moves,&K,&H);
         finish = clock()+(timee.hhh/2);
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        }else if (ch==115){
           gotoxy(40,9);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            printf("(1) SAVE1");
            gotoxy(40,11);
            printf("(2) SAVE2");
            gotoxy(40,13);
            printf("(3) SAVE3");
            char choi=getch();
            while((choi!='1') && (choi!='2') && (choi!='3')){
                gotoxy(40,15);
                printf("PLS ENTER 1 or 2 or 3");
                choi = getch();
            }
                gotoxy(40,15);
                printf("                     ");
            if(choi=='1'){
                save13(a,rr,a6,r,a3,C,a5,J,f,score1,score2,finish,K,H,moves);
                Sleep(500);
                gotoxy(40,15);
                printf("                                                    ");
                gotoxy(40,9);
                printf("         ");
                gotoxy(40,11);
                printf("         ");
                gotoxy(40,13);
                printf("         ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }else if(choi=='2'){
                save23(a,rr,a6,r,a3,C,a5,J,f,score1,score2,finish,K,H,moves);
                Sleep(500);
                gotoxy(40,15);
                printf("                                                    ");
                gotoxy(40,9);
                printf("         ");
                gotoxy(40,11);
                printf("         ");
                gotoxy(40,13);
                printf("         ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }else if(choi=='3'){
                save33(a,rr,a6,r,a3,C,a5,J,f,score1,score2,finish,K,H,moves);
                Sleep(500);
                gotoxy(40,15);
                printf("                                                    ");
                gotoxy(40,9);
                printf("         ");
                gotoxy(40,11);
                printf("         ");
                gotoxy(40,13);
                printf("         ");
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            }
        }else if(ch==27){
            gotoxy(40,9);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            printf("ANY UNSAVED DATA WILL BE LOST IF YOU EXIT! (y/n)");
             char chii=getch();

             while((chii!='y')&&(chii!='n')){
             gotoxy(40,7);
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
             printf("CAN YOU PRESS SMALL y OR n!");
             chii=getch();
              }
              gotoxy(40,7);
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
             printf("                           ");

             if(chii=='y'){
             gotoxy(40,9);
             printf("                                                ");
             return;

             }else if(chii=='n'){
             gotoxy(40,9);
             printf("                                                ");
             }
        }else if (undo==0){
            gotoxy(0,22);
            printf("You can't do Redo without Undo");
            Sleep(500);
            system("cls");
            gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",C[i][b]);
        }
        printf("\n");
    }
            Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        }
        }
        }
    flag=0;
if (ch==13&&moves!=0){
undo = 0;
Drawing3(x1,x2,y1,y2,&rr,a,a6,&moves,num);
    }
    S13(a,a3,&r,&score1,a5,&num,&score2);
    if(moves==0){
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        player1.score = score1;
        pc.score = score2;
        break;
    }
    }else {
         M=0;
        x1=0; x2=0; y1=0; y2=0;
        gotoxy(0,2);
    for (i=0; i<20; i++){
            if (i==0||i==19){
                    if (num%2==0){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
     printf(" -------------------------\n");
                    }else {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
     printf(" -------------------------\n");
                    }
    }else {
     printf("|                         |\n");
    }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

    gotoxy(5,4);
        for(i=0;i<16;i++){
                gotoxy(5,4+i);
        for(b=0;b<17;b++){
            printf("%c",a[i][b]);
        }
        printf("\n");
    }
     Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
   AI1(moves,&x1,&x2,&y1,&y2,a,&finish,start);

undo = 0;
if(moves!=0){
H++;
 Drawing3(x1,x2,y1,y2,&rr,a,a6,&moves,num);
}
    S23(a,a3,&r,&score1,a5,&num,&score2);
    if(moves==0){
        Colors3(a6,C,a,GHline,GVline,a5,a3,aa,rr,score1,score2,r,f,J,start,finish,num,moves,K,H);
        player1.score = score1;
        pc.score = score2;
        break;
    }
    }
    }
    }
}
void load11(int a[16][17],int *rr,int a6[5][60],int *r,int a3[2][25],char C[16][17],int a5[],int *J,int *f,int *score1,int *score2,time_t *finish,int *K,int *H,int *moves){
    int SS,i,b;
  FILE* fptr = fopen("saved1.txt","r");
        fscanf(fptr , "%d" , &SS);
       for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fscanf(fptr ,"%d",&a[i][b]);
            }
        }
        fscanf(fptr , "%d" , &*rr);
        for(i=0 ; i<5 ; i++){
            for(b=0 ; b<*rr ; b++){
                fscanf(fptr ,"%d",&a6[i][b]);
            }
        }
        fscanf(fptr , "%d" ,&*r);
        for(i=0 ; i<2 ; i++){
            for(b=0 ; b<*r ; b++){
                fscanf(fptr ,"%d",&a3[i][b]);
            }
        }
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fscanf(fptr ,"%d",&C[i][b]);
            }
        }
        for(i=0 ; i<*r ; i++){
          fscanf(fptr ,"%d",&a5[i]);
        }
        fscanf(fptr , "%d" , &*J);
        fscanf(fptr , "%d" , &*f);
        fscanf(fptr , "%d" , &*score1);
        fscanf(fptr , "%d" , &*score2);
        fscanf(fptr , "%d" , &timee.hhh);
        fscanf(fptr , "%d" , &*K);
        fscanf(fptr , "%d" , &*H);
        fscanf(fptr , "%d" , &*moves);
        fscanf(fptr , "%s" , &player1.name);
        fclose(fptr);
}
void load22(int a[16][17],int *rr,int a6[5][60],int *r,int a3[2][25],char C[16][17],int a5[],int *J,int *f,int *score1,int *score2,time_t *finish,int *K,int *H,int *moves){
    int SS,i,b;
  FILE* fptr = fopen("saved2.txt","r");
        fscanf(fptr , "%d" , &SS);
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fscanf(fptr ,"%d",&a[i][b]);
            }
        }
        fscanf(fptr , "%d" , &*rr);
        for(i=0 ; i<5 ; i++){
            for(b=0 ; b<*rr ; b++){
                fscanf(fptr ,"%d",&a6[i][b]);
            }
        }
        fscanf(fptr , "%d" ,&*r);
        for(i=0 ; i<2 ; i++){
            for(b=0 ; b<*r ; b++){
                fscanf(fptr ,"%d",&a3[i][b]);
            }
        }
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fscanf(fptr ,"%d",&C[i][b]);
            }
        }
        for(i=0 ; i<*r ; i++){
          fscanf(fptr ,"%d",&a5[i]);
        }
        fscanf(fptr , "%d" , &*J);
        fscanf(fptr , "%d" , &*f);
        fscanf(fptr , "%d" , &*score1);
        fscanf(fptr , "%d" , &*score2);
        fscanf(fptr , "%d" , &timee.hhh);
        fscanf(fptr , "%d" , &*K);
        fscanf(fptr , "%d" , &*H);
        fscanf(fptr , "%d" , &*moves);
        fscanf(fptr , "%s" , &player1.name);
        fclose(fptr);
}
void load33(int a[16][17],int *rr,int a6[5][60],int *r,int a3[2][25],char C[16][17],int a5[],int *J,int *f,int *score1,int *score2,time_t *finish,int *K,int *H,int *moves){
    int SS,i,b;
  FILE* fptr = fopen("saved3.txt","r");
        fscanf(fptr , "%d" , &SS);
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fscanf(fptr ,"%d",&a[i][b]);
            }
        }
        fscanf(fptr , "%d" , &*rr);
        for(i=0 ; i<5 ; i++){
            for(b=0 ; b<*rr ; b++){
                fscanf(fptr ,"%d",&a6[i][b]);
            }
        }
        fscanf(fptr , "%d" ,&*r);
        for(i=0 ; i<2 ; i++){
            for(b=0 ; b<*r ; b++){
                fscanf(fptr ,"%d",&a3[i][b]);
            }
        }
        for(i=0 ; i<16 ; i++){
            for(b=0 ; b<17 ; b++){
                fscanf(fptr ,"%d",&C[i][b]);
            }
        }
        for(i=0 ; i<*r ; i++){
          fscanf(fptr ,"%d",&a5[i]);
        }
        fscanf(fptr , "%d" , &*J);
        fscanf(fptr , "%d" , &*f);
        fscanf(fptr , "%d" , &*score1);
        fscanf(fptr , "%d" , &*score2);
        fscanf(fptr , "%d" , &timee.hhh);
        fscanf(fptr , "%d" , &*K);
        fscanf(fptr , "%d" , &*H);
        fscanf(fptr , "%d" , &*moves);
        fscanf(fptr , "%s" , &player1.name);
        fclose(fptr);
}
AI1(int moves, int *x1,int *x2,int *y1,int *y2,int a[16][17],time_t *finish,time_t start){
int i,b,U=0,TEMP,k;
srand(time(NULL));

    if (moves!=0){
    for(i=0;i<16;i+=3){
        for(b=0;b<16;b+=3){
                U=0;
            if (a[i][b+1]==45){
                U++;
            }
            if (a[i+3][b+1]==45){
                U++;
            }
            if (a[i+1][b]==124){
                U++;
            }
            if (a[i+1][b+3]==124){
                U++;
            }
           if (U==3){
                if (a[i][b+1]!=45){
                *x1=i; *x2=i; *y1=b; *y2=b+3;
               }else if (a[i+3][b+1]!=45){
                   *x1=i+3; *x2=i+3; *y1=b; *y2=b+3;
               }else if (a[i+1][b]!=124){
                  *y1=b; *y2=b; *x1=i; *x2=i+3;
               }else if (a[i+1][b+3]!=124){
                  *y1=b+3; *y2=b+3; *x1=i; *x2=i+3;
               }
            }
        }

    }
}
if ((*x1==0)&&(*x2==0)&&(*y1==0)&&(*y2==0)&&(moves!=0)){
    for(i=0;i<13;i+=3){
        for(b=0;b<13;b+=3){
                U=0;
            if (a[i][b+1]==45){
                U++;
            }
            if (a[i+3][b+1]==45){
                U++;
            }
            if (a[i+1][b]==124){
                U++;
            }
            if (a[i+1][b+3]==124){
                U++;
            }
           if ((U==0)||(U==1)){
                if (a[i][b+1]!=45){
                *x1=i; *x2=i; *y1=b; *y2=b+3;
                break;
               }else if (a[i+3][b+1]!=45){
                   *x1=i+3; *x2=i+3; *y1=b; *y2=b+3;
                   break;
               }else if (a[i+1][b]!=124){
                  *y1=b; *y2=b; *x1=i; *x2=i+3;
                  break;
               }else if (a[i+1][b+3]!=124){
                  *y1=b+3; *y2=b+3; *x1=i; *x2=i+3;
                  break;
               }
            }
        }

    }
}
*finish=clock()+(timee.hhh/2);

if((*x1==0)&&(*x2==0)&&(*y1==0)&&(*y2==0)&&(moves!=0)){
   while(1){
       k=(((*finish - start)) / CLOCKS_PER_SEC);
     gotoxy(30,7);
     printf("time : %d%d : %d%d                 ",(k/60)/10,(k/60)%10,(k%60)/10,k%10);
     gotoxy(0,1);
    int A[6]={0,3,6,9,12,15};
        *x1 = A[rand()%6];
        *x2 = A[rand()%6];
        *y1 = A[rand()%6];
        *y2 = A[rand()%6];
        if((*x1==0 || *x1==3 || *x1==6 || *x1==9 || *x1==12 || *x1==15)&&(*x2==0 || *x2==3 || *x2==6 || *x2==9 || *x2==12 || *x2==15)&&(*y1==0 || *y1==3 || *y1==6 || *y1==9 || *y1==12 || *y1==15)&&(*y2==0 || *y2==3 || *y2==6 || *y2==9 || *y2==12 || *y2==15)){
                if((*x1==*x2)&&((*y1==(*y2+3)) || (*y2==(*y1+3)))){
                       if (*y1>*y2){
                        TEMP=*y2;
                        *y2=*y1;
                        *y1=TEMP;
                       }
                       if (a[*x1][*y1+1]!=45){
                        break;
                       }

                }else if((*y1==*y2)&&((*x1==(*x2+3)) || (*x2==(*x1+3)))){
                    if (*x1>*x2){
                        TEMP=*x2;
                        *x2=*x1;
                        *x1=TEMP;
                       }
                       if (a[*x1+1][*y1]!=124){
                        break;
                       }

                }
        }
     }
    }

}
