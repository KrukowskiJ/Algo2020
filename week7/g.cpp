#include <bits/stdc++.h>


using namespace std;

#define REP(i,n) for(int i=0; i<(n); ++i)

int n,m;
vector<vector<int> > adj;

int main()
{
    scanf("%d%d",&n,&m);
    adj.resize(n);

    REP(i,m){
    int a,b;
    scanf("%d%d",&a,&b); --a; --b;
    adj[a].push_back(b);
    }

    queue<int> q;
    vector<int> distance(n,-1);
    q.push(0);
    distance[0]=0;
    while(!q.empty()){
        int v = q.front(); q.pop();

        for(int w : adj[v]){
            if(distance[w] == -1){
                distance[w] = distance[v] + 1;
                q.push(w);
            }
        }
    }


    REP(i,n){ printf("%d ", distance[i]);}
    return 0;
}
