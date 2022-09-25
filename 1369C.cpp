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
    vector<ll>v(n,0);
    vector<ll>st(k,0);
    for(ll i=0;i<n;i++)
    cin>>v[i];
    
    sort(v.begin(),v.end());
    for(ll i=0;i<k;i++)
    cin>>st[i];
    
    ll sm=0;
    ll temp=1;
    ll j=0;

sort(st.begin(),st.end());
ll ans=0;
ll pt=n-k;
for(ll i=0;i<k;i++){
ans+=v[n-i-1];
if(st[i]==1){
    ans+=v[n-i-1];
}
else{
    for(ll j=0;j<st[i]-1;j++){
        pt--;

    }
    ans+=v[pt];
}
    
    
}
cout<<ans<<endl;
}
    

return 0;
}