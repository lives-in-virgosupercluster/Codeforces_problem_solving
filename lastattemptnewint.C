#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll min(ll a,ll b){
    if(a<b){
        return a;
    }
    return b;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
  
    while(t--){
         ll minl=10e9;
    ll maxr=-1;
    ll costl=10e9;
    ll costr=10e9;
        ll n;
        cin>>n;
        ll l,r,c;
        map<pair<ll,ll>,ll> m;
        for(int i=0;i<n;i++){
            cin>>l>>r>>c;
            if(m.find(make_pair(l,r))!=m.end()){
                m[make_pair(l,r)]=min(c,m[make_pair(l,r)]);
            }
            else{
                m[make_pair(l,r)]=c;
            }
            if(minl>l){
                minl=l;
                costl=c;
            }
            else if(minl==l){
                costl=min(c,costl);
            }
            if(maxr<r){
                maxr=r;
                costr=c;

            }
            else if(maxr==r){
                costr=min(costr,c);
            }
            ll ans=costl+costr;
            if(m.find(make_pair(minl,maxr))!=m.end()){
                ans=min(ans,m[make_pair(minl,maxr)]);
                cout<<ans<<"\n";
            }
            else{
            cout<<ans<<"\n";
            }

        }

}
return 0;
}

