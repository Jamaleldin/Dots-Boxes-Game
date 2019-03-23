#ifndef FUNCTIONPC_H_INCLUDED
#define FUNCTIONPC_H_INCLUDED

void gotoxy(int p,int w);
void Colors1(int a6[5][12],char C[7][8],int a[7][8],int GHline[],int GVline[],int a5[],int a3[2][4],int aa[4][4],int rr,int score1,int score2,int r,int f,int J,time_t start,time_t finish,int num,int moves,int K,int H);
void S1(int a[7][8],int a3[2][4],int *r,int *score1,int a5[],int *num,int *score2);
void S2(int a[7][8],int a3[2][4],int *r,int *score1,int a5[],int *num,int *score2);
void Undo1(int a6[5][12],int *rr,int *Undo,int k,int v,int m,int u,int a[7][8],int a3[2][4],int a5[],int *r,int *score1,int *score2,int *flag,int *num,int *f2,int B[],int *M,int *moves,int *K,int *H);
void Redo1 (int a6[5][12],int *rr,int *Undo,int k,int v,int m,int u,int a[7][8],int a3[2][4],int a5[],int *r,int *score1,int *score2,int *flag,int *num,int *f2,int B[],int *M,int *moves,int *K,int *H);
void p1Vshuman ();
void Arrows1(int ch,int a6[5][12],char C[7][8],int a[7][8],int GHline[],int GVline[],int a5[],int a3[2][4],int aa[4][4],int rr,int score1,int score2,int r,int *f,int *J,time_t start,time_t finish,int num,int moves,int K,int H);
void Detect_Check1(int *flag,int J,int f,time_t start,time_t finish,int *x1,int *y1,int *x2,int *y2,int a6[5][12],char C[7][8],int a[7][8],int GHline[],int GVline[],int a5[],int a3[2][4],int aa[4][4],int rr,int score1,int score2,int r,int num,int moves,int K,int H);
void Drawing1(int x1,int x2,int y1,int y2,int *rr,int a[7][8],int a6[5][12],int *moves,int num);
void save11(int a[7][8],int rr,int a6[5][12],int r,int a3[2][4],char C[7][8],int a5[],int J,int f,int score1,int score2,time_t finish,int K,int H,int moves);
void save21(int a[7][8],int rr,int a6[5][12],int r,int a3[2][4],char C[7][8],int a5[],int J,int f,int score1,int score2,time_t finish,int K,int H,int moves);
void save31(int a[7][8],int rr,int a6[5][12],int r,int a3[2][4],char C[7][8],int a5[],int J,int f,int score1,int score2,time_t finish,int K,int H,int moves);
void p1Vshuman_load1 ();
void p1Vshuman_load2 ();
void p1Vshuman_load2 ();
void load1_1(int a[7][8],int *rr,int a6[5][12],int *r,int a3[2][4],char C[7][8],int a5[],int *J,int *f,int *score1,int *score2,time_t *finish,int *K,int *H,int *moves);
void load1_1(int a[7][8],int *rr,int a6[5][12],int *r,int a3[2][4],char C[7][8],int a5[],int *J,int *f,int *score1,int *score2,time_t *finish,int *K,int *H,int *moves);
void load1_1(int a[7][8],int *rr,int a6[5][12],int *r,int a3[2][4],char C[7][8],int a5[],int *J,int *f,int *score1,int *score2,time_t *finish,int *K,int *H,int *moves);
void AI(int moves, int *x1,int *x2,int *y1,int *y2,int a[7][8],time_t *finish,time_t start);

#endif // FUNCTIONPC_H_INCLUDED
