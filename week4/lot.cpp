#include <iostream>
#include <cstdio>

const int N=500002;
int n;
char s[N];

int main(){
    scanf("%d%s", &n, s);
    int ans=0,i=0;

    while(i < n ){
        int j = i;
    while(j < n && s[i] == s[j])
        ++j;
 ans += (j - i) / 2;
 i = j;
}
printf("%d\n", ans);
}
