#include <bits/stdc++.h>

using namespace std;

long long  n,suma,a;

int main(){
    scanf("%lld",&n);
    suma=n;

    for(int i=2;i<=sqrt(n);i++){
        a=i*i;


            while(a<=n){

                if(a<=n)

                    suma+=1;



                a+=i;
    }}

    cout<<suma;
    return 0;
}
