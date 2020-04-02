#include <bits/stdc++.h>                                                        
                                                                                
using namespace std;                                                            
                                                                                
int a,b,imax,maxi=0;                                                            
                                                                                
int main(){                                                                     
    vector<int> V_i;                                                            
    scanf("%d",&a);                                                             
    for(int i=0;i<a;i++){                                                       
        scanf("%d",&b);                                                         
                                                                                

        if(b>maxi){                                                             
            maxi=b;                                                             
            imax=i;                                                             
        }                                                                       
V_i.push_back(b);                                                               
    }                                                                           
                                                                                
                                                                                
if(V_i[(imax+1)%a]>=V_i[(imax-1+a)%a]){                                         
    for(int i=1;i<a-2;i++)                                                      
        if(V_i[(imax+i)%a]<V_i[(imax+i+1)%a]){                                  
            cout<<"NIE";                                                        
            exit(0);}                                                           
}else{                                                                          
    for(int i=1;i<a-2;i++)                                                      
        if(V_i[(imax-i+a)%a]<V_i[(imax-i-1+a)%a]){                              

            cout<<"NIE";                                                        
            exit(0);}}                                                          
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
        cout<<"TAK"<<endl;                                                      
                                                                                
                                                                                
                                                                                
    return 0;                                                                   
}                                                                               
