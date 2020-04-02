#include <bits/stdc++.h>                                                        
                                                                                
using namespace std;                                                            
                                                                                
                                                                                
                                                                                
bool potega (long long n){                                                      
    while(n%2==0)                                                               
        n/=2;                                                                   
                                                                                
    return n==true;                                                             
}                                                                               
int main(){                                                                     
      long long n;                                                              
    scanf("%lld",&n);                                                           

    printf("%s\n",  potega(n) ? "TAK" : "NIE");                                 
                                                                                
    return 0;                                                                   
}              
