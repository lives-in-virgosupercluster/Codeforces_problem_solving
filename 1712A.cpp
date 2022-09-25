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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n+1,0);
    map<ll,ll>m;
    for(ll i=1;i<=n;i++){
        cin>>v[i];
       
    }
    ll ans=0;
   for(ll i=1;i<=k;i++){
    if(v[i]>k){
        ans++;
    }
   }
   cout<<ans<<endl;
}
return 0;
}