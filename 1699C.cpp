#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
const ll mod=1e9+7;

using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n;
    ll l,r,ans=1;
    cin>>n;
    vector<ll>v(n,0);
   map<ll,ll>pos;
   for (ll i = 0; i < n; i++)
   {
    cin>>v[i];
    pos[v[i]]=i;
   }
    l=r=pos[0];
   for(ll i=1;i<n;i++){
    if(pos[i]<l)
    l=pos[i];
    else if(pos[i]>r)
    r=pos[i];
    else{
        ans=ans*(r-l+1-i)%mod;
    }
   }
   cout<<ans<<endl;

    
}
return 0;
}