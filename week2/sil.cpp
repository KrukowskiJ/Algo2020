#include <bits/stdc++.h>                                                        
                                                                                                                                                         
long long  n,a=1;                                                               
                                                                                
int main(){                                                                     
    scanf("%lld",&n);  
    for(long long i=2;i<=n;i++)                                                 
        a*=i;                                                                   
                                                                                
  printf("%d",a%10);                                                                 
  return 0;                                                                   
} 
