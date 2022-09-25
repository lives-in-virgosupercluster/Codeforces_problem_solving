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
    ll m;
    cin>>n>>m;
    if(m==1){
        ll ans=((n*(n+1))/2);
        cout<<ans<<endl;
    }
    else{
        ll ans=((m*(m+1))/2);
        ll num=m;
        for(ll i=1;i<n;i++){
            num+=m;
            ans+=num;
        }
        cout<<ans<<endl;
    }
}
return 0;
}