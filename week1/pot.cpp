#include <bits/stdc++.h>



int main()
{   unsigned long long a,b,d;

    scanf("%d",&a);
    scanf("%d",&b);
    if(a%10==1)
        d=1;
    else if(a%10==2){
        if(b%4==1)
            d=2;
        else if(b%4==2)
            d=4;
        else if(b%4==3)
            d=8;
        else if(b%4==0)
            d=6; }
    else if(a%10==3){
        if(b%4==1)
            d=3;
        else if(b%4==2)
            d=9;
        else if(b%4==3)
            d=7;
        else if(b%4==0)
            d=1; }
    else if(a%10==4)
        b%2==1 ?  d=4 : d=6;
    else if(a%10==5)
        d=5;
    else if(a%10==6)
        d=6;
    else if(a%10==7){
        if(b%4==1)
            d=7;
        else if(b%4==2)
            d=9;
        else if(b%4==3)
            d=3;
        else if(b%4==0)
            d=1; }
     else if(a%10==8){
        if(b%4==1)
            d=8;
        else if(b%4==2)
            d=4;
        else if(b%4==3)
            d=2;
        else if(b%4==0)
            d=6; }
    else if(a%10==9)
        b%2==1 ?   d=9 : d=1;
    else
        d=0;
    printf("%d",d);
    return 0;
}
