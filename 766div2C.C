#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
vector<ll>vis(100000+1,0);
vector<vector<ll>>edge(100000+1);
map<pair<ll,ll>,int>ans;
void dfs(ll start,int val){
    vis[start]=1;
    for(auto it:edge[start]){
        if(vis[it]==0){
        ans[make_pair(min(start,it),max(start,it))]=val;
        dfs(it,7-val);
        }
    }
    return ;
}
int main(){
//  ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>count(n+1,0);
    //vector<vector<ll>>edge(n+1,vector<ll>(n+1,0));
    vector<pair<ll,ll>>v;

    for(ll i=1;i<=n;i++){
        edge[i].clear();
        vis[i]=0;

    }
    ll x,y;
    int flag=0;
    for(ll i=0;i<n-1;i++){
        cin>>x>>y;
        count[x]++;
        count[y]++;
        edge[x].push_back(y);
        edge[y].push_back(x);
        
        v.push_back(make_pair(min(x,y),max(x,y)));
        if(count[x]>2|| count[y]>2){
            flag=1;

        }

    }
    if(flag==1){
        cout<<-1<<endl;
    }
    else{
    for(ll i=1;i<=n;i++){
        if(count[i]==1){
            dfs(i,2);
            break;
        }
        
    }
    for(int i=0;i<n-1;i++){
        cout<<ans[v[i]]<<endl;
    }
    }

}
return 0;
}