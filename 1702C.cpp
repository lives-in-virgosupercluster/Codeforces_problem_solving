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
    ll n,k;
    cin>>n>>k;
    map<ll,pair<ll,ll>>loc;
    map<ll,ll>count;
    vector<ll>v(n,0);
    for (size_t i = 0; i < n; i++)
    {
        cin>>v[i];
        count[v[i]]++;
        if(count[v[i]]>1){
            loc[v[i]].second=i;
        }
        else{
            loc[v[i]].first=i;
            loc[v[i]].second=i;
        }
    }
    for (ll i = 0; i < k; i++)
    {
        ll a,b;
        cin>>a>>b;
        if(count[a]>0 && count[b]>0){
        if(loc[a].first>loc[b].second){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
        }
        else{
            cout<<"no"<<endl;
        }
    }
    
    
}
return 0;
}