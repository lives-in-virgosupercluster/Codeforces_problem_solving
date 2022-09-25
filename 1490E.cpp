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
    vector<ll>v(n+1,0);
    map<ll,vector<ll>>m;
    map<ll,ll>check;
    vector<ll>prefix(n+1,0);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
        m[v[i]].push_back(i);
    }
    sort(v.begin(),v.end());
    for(ll i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+v[i];

    }
    vector<ll>ans;
    //ans.push_back(m[v[n]]);
    ll k=n;
    while(!m[v[n]].empty()){
        ans.push_back(m[v[n]].back());
        m[v[n]].pop_back();
k--;
    }
    for(ll i=k;i>=0;i--){
if(prefix[i]>=v[i+1]){
    ll j=0;
    while(!m[v[i]].empty()){
    ans.push_back(m[v[i]].back());
    m[v[i]].pop_back();
    j--;
    }
    j=j+1;
    i+=j;
}
else{
    break;
}
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto a:ans)
    cout<<a<<" ";
    cout<<endl;

}
return 0;
}