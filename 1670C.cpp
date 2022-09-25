#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define max 1e9

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
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    const int maxx =1e9;
    //cout<<maxx<<endl;
    cin>>n;
    makeset(n);
    map<int,int>m;
    vector<int>a(n,0);
    vector<int>b(n,0);
    vector<int>c(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
        unionset(a[i],b[i]);
    }
    for(int i=0;i<n;i++){
        
        m[findset(i+1)]++;
    }
    for(int i=0;i<n;i++){
        if(c[i]!=0)
        m[findset(c[i])]=0;
    }
    ll power=0;
    for(int i=0;i<n;i++){
        if(m[i+1]>1){
            power++;
        }
    }
    ll ans=1;
    for(int i=0;i<power;i++)
        ans=(ans*2)%(maxx+7);
    cout<<ans<<endl;
    
    
    
}

    return 0;

}

