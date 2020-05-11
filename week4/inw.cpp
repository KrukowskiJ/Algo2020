#include <cstdio>
#include <vector>


int main() {
    int n;
    scanf("%d", &n);
    std::vector<int> a;
    a.push_back(0);
    for(int i=0; i<n; ++i){
        int x;
        scanf("%d", &x);
        a.push_back(x);
    }

    std::vector<long long> d(n+1);
    d[0] = 0;
    d[1] = a[1];
    for(int i=2; i<=n; ++i)
        d[i] = std::max(d[i-1], a[i] + d[i-2]);



    printf("%lld",d[n]);

  return 0;
}
