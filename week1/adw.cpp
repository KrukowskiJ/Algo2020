#include <bits/stdc++.h>                                                        
                                                                                
using namespace std;                                                                                                                                   

int meetings,days,b,c,d;                                                        
int main(){                                                                     
    bool wynik=0;                                                               
    scanf("%d",&meetings);                                                      
    scanf("%d",&days);                                                          

    vector<int> H_ourstart;                                                     

    vector<int> H_ourend;                                                       

    vector<int> D_ays;                                                          
    for(int i=0;i<meetings;i++){                                                
        scanf("%d",&b);                                                         
        scanf("%d",&c);                                                         
        scanf("%d",&d);                                                         
    H_ourstart.push_back(b);                                                    
    H_ourend.push_back(c);                                                      
    D_ays.push_back(d);                                                         
                                                                                
    }                                                                           
                                                                                
   int a=1;                                                                                                                                                     
                                                                                
            do{                                                                 

    int imini=0,imaxi=0;                                                        

   int mini=80000000;                                                           

   int maxi=0;                                                                  
                                                                                
                                                                                
            for(int i=0;i<meetings;i++){                                        
                if(D_ays[i]%(days+1)==a){                                       
                    if(H_ourend[i]<mini){                                       
                    mini=H_ourend[i];                                           
                    imini=i+1;}                                                 
                     if(H_ourstart[i]>maxi){                                    
                    maxi=H_ourstart[i];                                         
                    imaxi=i+1;}                                                 
                }                                                               
            }                                                                   
                 if(maxi>mini)                                                  
                cout<<"TAK"<<"  "<<imini<<"  "<<imaxi<<endl;                    
                else                                                            
                cout<<"NIE"<<endl;                                              
                
 a++;                                                                           
            }while( a<=days);                                                                                                                              
    return 0;                                                                   
}                                                                               
