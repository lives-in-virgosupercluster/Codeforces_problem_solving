#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
bool check(vector<ll>&a,vector<ll>&b,ll target,ll n){
    ll sum=0;
    for(ll i=1;i<=n;i++){
        if(target<a[i]){
sum+=b[i];
        }
    }
    if(sum>target){
        return false;
    }
    else
    return true;
}
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n+1,0);
    vector<ll>v1(n+1,0);
   
    ll max1=INT64_MIN;
    for(ll i=1;i<=n;i++){
        cin>>v[i];
        //a.insert({v[i],i});
        if(max1<v[i]){
            max1=v[i];
        }
    }
    ll sum=0;
    for(ll i=1;i<=n;i++){
        cin>>v1[i];
        sum+=v1[i];
        //b.insert({v1[i],i});
    }
    max1=min(max1,sum);

    
    ll l=0;
    ll r=max1;
    while(l+1<r){
        ll mid=(l+r)/2;
        if(check(v,v1,mid,n)){
r=mid;
        }
        else{
            l=mid;
        }
    }
    cout<<r<<endl;

    
}
return 0;
}