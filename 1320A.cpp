#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
        m[i-v[i]]+=v[i];
    }
    ll mx=-1;
    for(auto a:m){
        mx=max(mx,a.second);
    }
    cout<<mx<<endl;

return 0;
}
