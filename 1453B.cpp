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
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    ll totalmoves=0;
    for(ll i=1;i<n;i++){
        totalmoves+=abs(v[i]-v[i+1]);
    }
    ll mx=INT_LEAST16_MIN;
    mx=max(mx,abs(v[n]-v[n-1]));
    mx=max(mx,abs(v[1]-v[2]));
    for(ll i=2;i<n;i++){
        mx=max(mx,abs(v[i-1]-v[i])+abs(v[i+1]-v[i])-abs(v[i-1]-v[i+1]));
    }
    cout<<totalmoves-mx<<endl;


}
return 0;
}