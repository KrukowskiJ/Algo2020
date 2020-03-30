#include <bits/stdc++.h>

int main(){

int a,b,c;
int d;
    scanf("%d%d%d",&a,&b,&c);
     int inside_field;
    if(c>a || c>b)
        d=0;
    else if(c==a && c==b)
        d=1;
    else if(a>2*c && b>2*c){
    a=a-(a%c);
    b=b-(b%c);

    inside_field=(a-2*c)*(b-2*c);
    d=(a*b-inside_field)/(c*c);
    }
    else{
    a=a-(a%c);
    b=b-(b%c);
    d=(a*b)/(c*c);
    }
printf("%d",d);
    return 0;
}
