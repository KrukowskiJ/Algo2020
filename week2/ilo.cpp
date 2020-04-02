#include <bits/stdc++.h>                                                        
using namespace std;                                                            
                                                                                
void sprawdzanie(vector<int> Fibo, double a){                                   

     for(int i=1;Fibo[i]<=sqrt(a);i++){                                         
         double b=a/Fibo[i];                                                    
         for(int i=0;i<47;i++)                                                  
            if(b==Fibo[i]){                                                     
                cout<<"TAK"<<endl;                                              
                return;                                                         
            }                                                                   
     }                                                                          
                                                                                
cout<<"NIE"<<endl;                                                              
}                                                                               
                                                                                
int main(){                                                                     
int n,test;                                                                     
vector<int> Fibo;                                                               
vector<int> liczby;                                                             
                                                                                
int a = 0, b = 1;                                                               
 Fibo.push_back(0);                                                             
for(int i=0;i<47;i++)                                                           
     {                                                                          
            Fibo.push_back(b);                                                  
            b += a;                                                             
            a = b-a;                                                            
     }                                                                          
                                                                                
scanf("%d",&n);                                                                 
for(int i=0;i<n;i++){                                                           
scanf("%d",&test);                                                              
liczby.push_back(test);}                                                        
                                                                                
                                                                                
for(int i=0;i<n;i++){                                                           
        if(liczby[i]==0)                                                        
        cout<<"TAK"<<endl;                                                      
else                                                                            
sprawdzanie(Fibo,liczby[i]);                                                    
}                                                                               
                                                                                
                                                                                
                                                                                
return 0;                                                                       
}
