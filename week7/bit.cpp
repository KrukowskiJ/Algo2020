#include <bits/stdc++.h>

using namespace std;

#define REP(i,n) for(int i=0; i<(n); ++i)

const int N = 185;
const int DR[] = {1,-1,0,0}, DC[]= {0,0,-1,1};
int rows, cols;
char b[N][N];
int  d[N*N], q[N*N], qe, qb;
int Ans[N][N];


int main()
{
    scanf("%d%d",&rows,&cols);
    REP(i,rows) scanf("%s", b[i]);

    const int n = rows*cols;    // n -   total number of pixels
    qe=qb=0;
    REP(v,n) d[v]= -1;
    REP(i,rows) REP(j,cols) if(b[i][j]== '1'){

    int s = i*cols + j;
     d[s]=0;
     q[qe++] = s;
    }




    while(qe != qb) {
        int v = q[qb++];
        //v= (vi, vj)
        int vi = v/cols, vj = v%cols;
        //
        REP(mov,4){
        int wi = vi + DR[mov], wj = vj + DC[mov];

        if( wi<0 || wj<0 || wi>= rows || wj>=cols) continue;

        // (wi,wj) neighbour of V wierzchołek

        int w = wi*cols + wj;
            if(d[w] == -1){
            d[w] = d[v] + 1;
            q[qe++] = w;
            }
        }
    }


    REP(i,rows){
        REP(j,cols){
            int w = i*cols + j;
            printf("%d ", d[w]);
        }
    printf("\n");
     }



    return 0;
}
