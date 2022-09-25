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
    set<ll>s;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(s.find(v[i])==s.end()){
            s.insert(v[i]);
        }
        
    }
    if(s.size()>1 && m==1){
        cout<<-1<<endl;
    }
    else if(s.size()==1 && m==1){
        cout<<1<<endl;
    }
    else{
        ll ans=1;
        ll x=s.size();
        if(x<m){
            cout<<ans<<endl;
        }
        else{
            x-=m;
            cout<<1+ceil((double)x/(m-1))<<endl;
        }
    }

}
return 0;
}