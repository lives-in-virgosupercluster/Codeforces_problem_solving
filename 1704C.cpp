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
    ll m;
    cin>>m;
    vector<ll>v;
    for(ll i=0;i<m;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    vector<ll>diff;
    for(ll i=0;i<m;i++){
        if(i==m-1){
            diff.push_back(v[0]-1+n-v[i]);
        }
        else{
            diff.push_back(v[i+1]-v[i]-1);
        }
    }
    sort(diff.begin(),diff.end(),greater<int>());
    ll curr=0;
    ll sum=0;
    for(ll i=0;i<diff.size();i++){
        if(diff[i]-curr==1){
            sum++;
        }
        sum+=max(0ll,diff[i]-curr-1);
        curr+=4;
    }
    cout<<n-sum<<endl;
}
return 0;
}