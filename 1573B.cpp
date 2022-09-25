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
    vector<ll>a(n+1,0);
    vector<ll>b(n+1,0);
    map<ll,ll>m;
    //map<ll,ll>mb;
    vector<pair<ll,ll>>swaps;

    for (ll i = 1; i < n+1; i++)
    {
        cin>>a[i];
        m[a[i]]=i;
        
    }
    
    for(ll i=1;i<n+1;i++){
        cin>>b[i];
        swaps.push_back({b[i],i-1});
    }
    sort(swaps.begin(),swaps.end());
    //for(auto a:swaps)
    //cout<<a.first<<" "<<a.second<<endl;
    ll MIN=INT64_MAX;
    vector<ll>suffix(n+1,0);
    for(ll i=swaps.size()-1;i>=0;i--){
        MIN=min(swaps[i].second,MIN);
        suffix[i]=MIN;
    }
    ll j=0;
     MIN=INT64_MAX;

    for(ll i=1;i<=2*n;i+=2){
        ll x=m[i]-1;
        x+=suffix[j];
        MIN=min(x,MIN);
    j++;


    }
    cout<<MIN<<endl;



    }
    
    
    


return 0;
}