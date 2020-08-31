#include <bits/stdc++.h>

using namespace std;
#define REP(i,n) for(int i=0;i<(n);++i)

const int N = 5100;
int A,B,n,a[N],b[N];
set<int> points;
int min_ans=N,max_ans=0;
map<int,int> aa,bb;

 void update(int x){
 min_ans=min(min_ans,x);
 max_ans=max(max_ans,x);
 }

int main() {
    scanf("%d%d%d", &A,&B,&n);
    REP(i,n) { scanf("%d%d",&a[i],&b[i]); }

    A *= 2; B *= 2;
    REP(i,n) { a[i] *= 2; b[i] *= 2; }



        REP(i,n){
            aa[b[i]]++;
            bb[a[i]]++;
        }

     points.insert(A);
     points.insert(B);

        REP(i,n){
            if( A <= a[i] && a[i] <= B)  points.insert(a[i]);
            if( A <= b[i] && b[i] <= B)  points.insert(b[i]);
        }

        int x=0;

        REP(i,n){ if(a[i] <= A && A <= b[i]) ++x; }

        update(x);

    for(int t : points){
            if(t != A) {
            x += bb[t];
            update(x);
            }

        x -= aa[t];
            if(t != B){
            update(x);
            }

    }



    printf("%d %d\n",min_ans,max_ans);

  return 0;
}
