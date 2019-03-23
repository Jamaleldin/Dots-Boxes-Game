#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

void gotoxy(int p,int w);
void Colors(int a6[5][12],char C[7][8],int a[7][8],int GHline[],int GVline[],int a5[],int a3[2][4],int aa[4][4],int rr,int score1,int score2,int r,int f,int J,time_t start,time_t finish,int num,int moves,int K,int H);
void S1(int a[7][8],int a3[2][4],int *r,int *score1,int a5[],int *num,int *score2);
void S2(int a[7][8],int a3[2][4],int *r,int *score1,int a5[],int *num,int *score2);
void Undo(int a6[5][12],int *rr,int *undo,int k,int v,int m,int u,int a[7][8],int a3[2][4],int a5[],int *r,int *score1,int *score2,int *flag,int *f2,int *moves,int *K,int *H);
void Redo (int a6[5][12],int *rr,int *undo,int k,int v,int m,int u,int a[7][8],int a3[2][4],int a5[],int *r,int *score1,int *score2,int *flag,int *f2,int *moves,int *K,int *H);
void p1Vsp2 ();
void Arrows(int ch,int a6[5][12],char C[7][8],int a[7][8],int GHline[],int GVline[],int a5[],int a3[2][4],int aa[4][4],int rr,int score1,int score2,int r,int *f,int *J,time_t start,time_t finish,int num,int moves,int K,int H);
void Detect_Check(int *flag,int J,int f,time_t start,time_t finish,int *x1,int *y1,int *x2,int *y2,int a6[5][12],char C[7][8],int a[7][8],int GHline[],int GVline[],int a5[],int a3[2][4],int aa[4][4],int rr,int score1,int score2,int r,int num,int moves,int K,int H);
void Drawing(int x1,int x2,int y1,int y2,int *rr,int a[7][8],int a6[5][12],int *moves,int num);
void save1(int a[7][8],int rr,int a6[5][12],int r,int a3[2][4],char C[7][8],int a5[],int J,int f,int score1,int score2,time_t finish,int K,int H,int moves);
void save2(int a[7][8],int rr,int a6[5][12],int r,int a3[2][4],char C[7][8],int a5[],int J,int f,int score1,int score2,time_t finish,int K,int H,int moves);
void save3(int a[7][8],int rr,int a6[5][12],int r,int a3[2][4],char C[7][8],int a5[],int J,int f,int score1,int score2,time_t finish,int K,int H,int moves);
void p1Vsp2_load1 ();
void p1Vsp2_load2 ();
void p1Vsp2_load3 ();
void load1(int a[7][8],int *rr,int a6[5][12],int *r,int a3[2][4],char C[7][8],int a5[],int *J,int *f,int *score1,int *score2,time_t *finish,int *K,int *H,int *moves);
void load2(int a[7][8],int *rr,int a6[5][12],int *r,int a3[2][4],char C[7][8],int a5[],int *J,int *f,int *score1,int *score2,time_t *finish,int *K,int *H,int *moves);
void load3(int a[7][8],int *rr,int a6[5][12],int *r,int a3[2][4],char C[7][8],int a5[],int *J,int *f,int *score1,int *score2,time_t *finish,int *K,int *H,int *moves);


#endif // FUNCTION_H_INCLUDED
