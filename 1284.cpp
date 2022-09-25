#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n;
cin>>n;
vector<vector<ll>>row;
vector<ll>v(n,0);
vector<pair<ll,ll>>se;
vector<ll>first;
vector<ll>last;

for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    vector<ll>col;
    ll mx=0;
    ll fir=0;
    ll ls=0;
ll mn=INT64_MAX;
    for(ll j=0;j<x;j++){
        ll a;
        cin>>a;

        col.push_back(a);
        if(j!=0){
            if(col[j]>col[j-1]){
                v[i]=1;
            }
        }
       if(j==0){
        fir=a;

       }
       if(j==x-1){
        ls=a;
       }

    }
    if(v[i]!=1){
        first.push_back(fir);
        last.push_back(ls);
        se.push_back({fir,ls});

    }
    
    row.push_back(col);
}
sort(first.begin(),first.end());
sort(last.begin(),last.end(),greater<ll>());
ll ans=(n)*n;
for(ll i=0;i<se.size();i++){
    ll l=0;
    ll r=last.size();
    while(l+1<r){
ll mid=(l+r)/2;
if(last[mid]>=se[i].first){
    l=mid;
}
else{
    r=mid;
}
    }
   // cout<<l<<endl;
   
   //cout<<l<<endl;
   if(l==0){
    if(last[0]<se[i].first){
        l=-1;
    }
   }
    ans-=l+1;
    
}
cout<<ans<<endl;






return 0;
}