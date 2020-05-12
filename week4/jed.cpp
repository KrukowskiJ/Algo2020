#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)

const int N = 1111111;
int n, x, A[3][N], w[3][N];
map<pair<int, int>, int> m;

int main() {

    scanf("%d", &n);
   REP(i,3) REP(j,n){
            scanf("%d", &A[i][j]);
            A[i][j]--;
        }

   REP(i, 3) REP(j, n) { w[i][A[i][j]] = j; }

   REP(j, n) {
        int Bj = (w[0][j] - w[1][j] + n) % n;
        int Cj = (w[0][j] - w[2][j] + n) % n;
        pair<int, int> para = make_pair(Bj, Cj);
        m[para]++;
    }

    int ans = 0;
    for (auto x : m)
        ans = max(ans, x.second);

    printf("%d\n", ans);

    return 0;
}
