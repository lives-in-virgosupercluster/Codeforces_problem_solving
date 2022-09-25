#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll>a(n+1,0);
    vector<ll>b(n+1,0);
    map<ll,ll>m;
    map<ll,ll>m1;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        m[a[i]]=i;
    }
    for(ll i=1;i<=n;i++){
        cin>>b[i];
        m1[b[i]]=i;
    }
    ll ans=0;
    vector<ll>anspos(n+1,0);
    for(ll i=1;i<=n;i++){
        if(m1[a[i]]-m[a[i]]>=0){
            ans+=m1[a[i]]-m[a[i]];
        }
        else{
            ans+=(n-m[a[i]])+m1[a[i]];
        }
        anspos[ans]++;
        ans=0;

    }
    ll mx=-1;
    for(ll i=0;i<n;i++){
        mx=max(anspos[i],mx);
    }
    cout<<mx<<endl;

return 0;
}