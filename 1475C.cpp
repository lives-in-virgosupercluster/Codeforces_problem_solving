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
    ll a,b,k;
    cin>>a>>b>>k;
    vector<ll>boys(k,0);
    vector<ll>girls(k,0);
    map<ll,ll>boyschek;
    map<ll,ll>girlschek;
    for(ll i=0;i<k;i++){
        ll x;
        cin>>x;
        boyschek[x]++;
        boys[i]=x;
    }
    for(ll i=0;i<k;i++){
        ll x;
        cin>>x;
        girlschek[x]++;
        girls[i]=x;
    }
    ll ans=0;
    for(ll i=0;i<k;i++){
        ans+=k-(boyschek[boys[i]]+girlschek[girls[i]]-1);
        

    }
    cout<<ans/2<<endl;
}
return 0;
}