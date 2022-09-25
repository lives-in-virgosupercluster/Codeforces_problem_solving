#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll n;
    cin>>n;
    ll m;
    cin>>m;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>prefix(n,0);
    for(ll i=1;i<=n-1;i++){
        prefix[i]=prefix[i-1];
        if(v[i]<v[i-1]){
            prefix[i]+=v[i-1]-v[i];
        }

    }
    
    vector<ll>suffix(n,0);

    for(ll i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            suffix[i]=suffix[i+1]+v[i+1]-v[i];
        }
        else{
            suffix[i]=suffix[i+1];
        }
    }
    for(ll i=0;i<m;i++){
        ll s,d;
        cin>>s>>d;
        if(s<d){
            cout<<prefix[d-1]-prefix[s-1]<<endl;
        }
        else{
            cout<<suffix[d-1]-suffix[s-1]<<endl;
        }
    }
   

return 0;
}