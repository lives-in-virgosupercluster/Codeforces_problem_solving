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
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll prefval=v[0];
    ll suffixop=0;
    ll ans=0;
    for(ll i=1;i<n;i++){
        v[i]-=suffixop;
        if(v[i]<=prefval){
ans+=prefval-v[i];
prefval=v[i];

        }
        else{
            ans+=v[i]-prefval;
            suffixop+=v[i]-prefval;


        }
    }
    ans+=abs(prefval);
    cout<<ans<<endl;
}
return 0;
}