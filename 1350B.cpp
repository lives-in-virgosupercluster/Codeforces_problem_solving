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
    vector<ll>v(n+1,0);
    vector<ll>dp(n+1,0);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    for(ll i=1;i<=n;i++){
        dp[i]=1;
    }
   for(ll i=1;i<=n;i++){
    for(ll j=2*i;j<=n;j+=i){
if(v[i]<v[j]){
    dp[j]=max(dp[i]+1,dp[j]);
    
}
    }
   }
   ll mx=-1;
   for(ll i=1;i<=n;i++){
    mx=max(mx,dp[i]);

   }
   cout<<mx<<endl;

}
return 0;
}