#include <cstdio>
#include <vector>


int main() {
    int m;
    scanf("%d",&m);

std::vector<int> ans;
    int n;
while(m--){

int minx=1000000000,maxx=0,miny=1000000000,maxy=0;
bool answer=0;

 scanf("%d",&n);

 int j;

std::vector<int> values(4*n);

 for(int i=0;i<n*4;i+=4){

     scanf("%d%d%d%d",&values[i],&values[i+1],&values[i+2],&values[i+3]);

if(values[i]<minx){
        minx=values[i]; j=i;}

if(values[i+1]>maxx){
        maxx=values[i+1]; j=i;}

if(values[i+2]<miny){
        miny=values[i+2]; j=i;}

if(values[i+3]>maxy){
        maxy=values[i+3]; j=i;}

 }


for(j;j<n*4;j+=4)
if(values[j]==minx && values[j+1]==maxx && values[j+2]==miny && values[j+3]==maxy)
    answer=1;
    answer ? ans.push_back(1) : ans.push_back(0);
}

for(int i=0;i<ans.size();i++)
ans[i] ? printf("TAK\n"): printf("NIE\n");

  return 0;
}
