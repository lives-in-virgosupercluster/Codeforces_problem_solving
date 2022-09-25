#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
ll vis[1000][1000];
ll nodes[1000][1000];
ll w[4]={8,4,2,1};
ll dx[4]={-1,0,1,0};
ll dy[4]={0,1,0,-1};
ll bfs(ll x,ll y,ll n,ll m){
    
    if(x>=n || x<0){
        return 0;
    }
    if(y>=m || y<0){
        return 0;
    }
    if(vis[x][y])
    return 0;
    vis[x][y]=1;
    ll sum=1;
    for(int i=0;i<4;i++){
        if(w[i] & nodes[x][y])
        continue;
        sum+=bfs(x+dx[i],y+dy[i],n,m);
    }
    return sum;
}


int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;


    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>nodes[i][j];
            vis[i][j]=0;
        }
    }
 vector<ll>dis;   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(!vis[i][j]){
            ll x=bfs(i,j,n,m);
            dis.push_back(x);
           }
        }
    }
    sort(dis.begin(),dis.end(),greater<int>());
    for(ll ans:dis)
    cout<<ans<<" ";
    cout<<endl;


return 0;
}