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
    ll n,p,k;
    cin>>n>>p>>k;
    string s;
    cin>>s;
    ll x,y;
    cin>>x>>y;
    ll sum=0;
    string temp="1";
    s=temp+s;
    ll mn=INT32_MAX;
    vector<ll>v(n+1,0);
    for(ll i=n;i>=p;i--){
        sum=0;
        //ll ans=y*(n-i);
        if(s[i]=='0'){
            //sum++;
            v[i]++;
        }
        if(i+k<=n){
            
            v[i]+=v[i+k];

        }
        // if( n-i+1>=p){
        //     ll ans=y*(n-(n-i)+1);
        //     ans+=x*v[i];
        //     mn=min(ans,mn);
        // }
        ll ans=y*(i-p)+x*v[i];
        mn=min(ans,mn);

    }
    cout<<mn<<endl;
}
return 0;
}