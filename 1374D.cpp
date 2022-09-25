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
    ll k;
    cin>>n>>k;
    map<ll,ll>m;
    vector<ll>v(n,0);
    
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%k!=0){
            ll x=k-(v[i]%k);
            m[x]++;
            
        }
    }

    ll mx=-9;
    ll flag=0;
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second>1){
            ll temp=it->first+k*(it->second-1);
            mx=max(temp,mx);
            flag=1;
        }
        else if(it->second==1){
            mx=max(it->first,mx);
            flag=1;
        }
    }
    if(!flag){
        cout<<0<<endl;
    }
    else
    cout<<mx+1<<endl;
    
}
return 0;
}