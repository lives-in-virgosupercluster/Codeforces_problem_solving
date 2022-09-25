#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<vector<ll>>v(n+1);
    ll arr[n+1];
    for(ll i=1;i<=n;i++){
        cin>>arr[i];

    }
    for (ll i = 1; i <= n; i++)
    {   ll x;
        cin>>x;
        v[arr[i]].push_back(x);
        
    }
    for(ll i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end(),greater<ll>());
    }
    vector<vector<ll>>pre(n+1,vector<ll>(1,0));
    for(ll i=1;i<=n;i++){
        
        for(auto temp:v[i]){
            pre[i].push_back(pre[i].back()+temp);
        }
            
            
        
    }
    
    vector<ll>ans(n+1,0);
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=v[i].size();j++)
        ans[j]+=pre[i][v[i].size()/j*j];
    }
    for(ll i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}
return 0;
}