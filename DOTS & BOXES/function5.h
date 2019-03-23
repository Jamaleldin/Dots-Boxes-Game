#ifndef FUNCTION5_H_INCLUDED
#define FUNCTION5_H_INCLUDED

void gotoxy(int p,int w);
void ColorS22(int a6[5][60],char C[16][17],int a[16][17],int GHline[],int GVline[],int a5[],int a3[2][25],int aa[4][4],int rr,int score1,int score2,int r,int f,int J,time_t start,time_t finish,int num,int moves,int K,int H);
void S12(int a[16][17],int a3[2][25],int *r,int *score1,int a5[],int *num,int *score2);
void S22(int a[16][17],int a3[2][25],int *r,int *score1,int a5[],int *num,int *score2);
void Undo2(int a6[5][60],int *rr,int *undo,int k,int v,int m,int u,int a[16][17],int a3[2][25],int a5[],int *r,int *score1,int *score2,int *flag,int *f2,int *moves,int *K,int *H,int num);
void Redo2(int a6[5][60],int *rr,int *undo,int k,int v,int m,int u,int a[16][17],int a3[2][25],int a5[],int *r,int *score1,int *score2,int *flag,int *f2,int *moves,int *K,int *H);
void p1Vsp2_5();
void Arrows2(int ch,int a6[5][60],char C[16][17],int a[16][17],int GHline[],int GVline[],int a5[],int a3[2][25],int aa[4][4],int rr,int score1,int score2,int r,int *f,int *J,time_t start,time_t finish, int num,int moves,int K,int H);
void Detect_Check2(int *flag,int J,int f,time_t start,time_t finish,int *x1,int *y1,int *x2,int *y2,int a6[5][60],char C[16][17],int a[16][17],int GHline[],int GVline[],int a5[],int a3[2][25],int aa[4][4],int rr,int score1,int score2,int r,int num,int moves,int K,int H);
void Drawing2(int x1,int x2,int y1,int y2,int *rr,int a[16][17],int a6[5][60],int *moves,int num);
void save12(int a[16][17],int rr,int a6[5][60],int r,int a3[2][25],char C[16][17],int a5[],int J,int f,int score1,int score2,int finish,int K,int H,int moves);
void save22(int a[16][17],int rr,int a6[5][60],int r,int a3[2][25],char C[16][17],int a5[],int J,int f,int score1,int score2,int finish,int K,int H,int moves);
void save32(int a[16][17],int rr,int a6[5][60],int r,int a3[2][25],char C[16][17],int a5[],int J,int f,int score1,int score2,int finish,int K,int H,int moves);
void p1Vsp2_5_load1 ();
void p1Vsp2_5_load2 ();
void p1Vsp2_5_load3 ();
void load111(int a[16][17],int *rr,int a6[5][60],int *r,int a3[2][25],char C[16][17],int a5[],int *J,int *f,int *score1,int *score2,time_t *finish,int *K,int *H,int *moves);
void load222(int a[16][17],int *rr,int a6[5][60],int *r,int a3[2][25],char C[16][17],int a5[],int *J,int *f,int *score1,int *score2,time_t *finish,int *K,int *H,int *moves);
void load333(int a[16][17],int *rr,int a6[5][60],int *r,int a3[2][25],char C[16][17],int a5[],int *J,int *f,int *score1,int *score2,time_t *finish,int *K,int *H,int *moves);
#endif // FUNCTION5_H_INCLUDED
