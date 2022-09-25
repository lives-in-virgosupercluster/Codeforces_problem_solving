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
    ll n,m;
    cin>>n>>m;
    vector<string>v;
    for(ll i=0;i<n;i++){
       string s;
       cin>>s;
            v.push_back(s);
        
    }
    vector<vector<ll>>dp(n,vector<ll>(m,0));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(v[i][j]=='*'){
                dp[i][j]=1;
            }
        }
    }
    for(ll i=n-2;i>=0;i--){
        for(ll j=m-2;j>=1;j--){
            if(dp[i][j]==1){
                dp[i][j]=1+min(min(dp[i+1][j],dp[i+1][j+1]),dp[i+1][j-1]);
            }
        }
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
        ans+=dp[i][j];
        }
    }
    cout<<ans<<endl;

    
}
return 0;
}