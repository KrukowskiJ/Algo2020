#include <stdio.h>

int main(){
int V, E,Edges_num=0, MultiColorTriangles=0;
scanf("%d%d",&V,&E);
short int RED[V]={0};

while(E--){
int a, b;
scanf("%d%d",&a,&b);
RED[a-1]+=1;
RED[b-1]+=1;}

for(size_t i=1;i<=V;i++)
MultiColorTriangles+=RED[i-1]*(V-1-RED[i-1]);

Edges_num= V*(V-1)*(V-2)/6;  //NEWTON (n k)
E=Edges_num-MultiColorTriangles/2; //use E variable for answer

printf("%d",E);
}
