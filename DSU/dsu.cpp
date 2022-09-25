#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
map<int,int>vpri;
map<int,int>vsize;
map<int,int>vrank;
void makeset(int n){
    for(int i=0;i<n;i++){
        vpri[i+1]=i+1;
        vrank[i+1]=0;
        vsize[i+1]=1;
        

    }
}
int findset(int x){
    if(vpri[x]==x)
    return x;
    else{
        return findset(vpri[x]);

    }
}
void unionset(int x,int y){
    if(findset(x)==findset(y))
    return ;
    int xp=findset(x);
    int yp=findset(y);
    if(vrank[xp]>vrank[yp]){
        vpri[yp]=xp;
        vsize[xp]+=vsize[yp];

        
    }
    else{
        vpri[xp]=yp;
        vsize[yp]+=vsize[xp];
        if(vrank[xp]==vrank[yp])
        vrank[yp]++;
    }
}
int main(){
 int n;
 cin>>n;
 

return 0;
}