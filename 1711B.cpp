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
    ll m;
    cin>>n>>m;
    vector<ll>v(n+1,0);
    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        v[i]=x;
    }
    ll mn=INT_MAX;
    map<ll,ll>degree;
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        degree[a]++;
        degree[b]++;
        mn=min(mn,v[a]+v[b]);

    }
    for(ll i=1;i<=n;i++){
        if(degree[i]%2!=0)
        mn=min(mn,v[i]);
    }
    if(m%2==0){
        cout<<0<<endl;
    }
    else
    cout<<mn<<endl;
    
}
return 0;
}