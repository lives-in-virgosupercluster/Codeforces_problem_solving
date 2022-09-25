#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
map<ll,ll>vpri;
map<ll,ll>vsize;
map<ll,ll>vrank;
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        vpri.clear();
        vrank.clear();
        vsize.clear();
 ll n;
 cin>>n;
 vector<ll>deg(n+1,0);
 makeset(n);
 ll flag=0;
 for(ll i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
    deg[a]++;
    deg[b]++;
    if(a==b){
        flag=1;
    }
    if(deg[a]>2){
        flag=1;
    }
    if(deg[b]>2){
        flag=1;
    }
    unionset(a,b);

 }
 //ll flag=0;
if(!flag){
 for(ll i=1;i<=n;i++){
if(vsize[findset(i)]%2!=0){
    //cout<<vpri[i]<<endl;
    //cout<<vsize[5]<<endl;
flag=1;
break;
}
 }
 }
 if(!flag){
    cout<<"yes"<<endl;
 }
 else{
    cout<<"no"<<endl;
 }
    }
 

return 0;
}