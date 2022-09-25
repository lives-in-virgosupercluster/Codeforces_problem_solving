#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
bool check(vector<ll>&v,ll num,ll k,ll n){
    ll moves=0;
    for(ll i=n/2;i<n;i++){
        if(v[i]<num){
            moves+=num-v[i];
        }

    }
    if(moves>k){
        return false;
    }
    return true;
}

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   ll n,k;
   cin>>n>>k;
   vector<ll>v(n,0);
   for(ll i=0;i<n;i++){
    cin>>v[i];
   }
sort(v.begin(),v.end());
ll j=n-1;
ll ans=0;
ll l=v[n/2];
ll r=2e9+1;
while(l+1<r){
    ll mid=(l+r)/2;
    if(check(v,mid,k,n)){
        l=mid;
    }
    else{
        r=mid;
    }
}
ans=l;
cout<<ans<<endl;
return 0;
}