#include <bits/stdc++.h>

const int N=1000044;
int n,t,a[N];


int main(){
scanf("%d%d",&n,&t);

for(int i=0;i<n;++i) scanf("%d",&a[i]);

long long ans=0;
if(n==1) ans= (long long)(1+t/2)*a[0];
else{
    long long p=0;
    for(int i=0;i<n-1;++i){
        if(t>=i){

    long long d=t-(i-1);
    long long grz=p + (d+1)/2 * a[i]+ d/2*a[i+1];
    if(grz>ans) ans=grz;

        }

        p+=a[i];
    }
}

printf("%lld\n",ans);
}
