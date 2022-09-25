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
    vector<ll>v(n,0);
    ll mx=INT64_MAX;
    ll mn=INT64_MIN;
    ll j=0;
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
       sum+=v[i];
        mn=max(v[i],mn);
    }
    ll x=ceil((double)sum/(n-1));
    //cout<<x<<endl;
    if(x<mn){
        cout<<mn*(n-1)-sum<<endl;
    }
    else{
        cout<<x*(n-1)-sum<<endl;
    }
   

}
return 0;
}