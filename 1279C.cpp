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
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n,0);
    vector<ll>v1(m,0);
    set<ll>s;
    map<ll,ll>check;
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    for(ll i=0;i<m;i++){
        cin>>v1[i];
        s.insert(v1[i]);
    }
    ll mn=0;
    ll ans=0;
    ll k=0;
    for(ll i=0;i<m;i++){
        if(check[v1[i]]==0){
            ll moves=0;
            for(ll j=k;j<n;j++){
                if(s.find(v[j])!=s.end()){
                    check[v[j]]=1;

                }
                if(v1[i]==v[j]){
                    ans+=2*(j-i)+1;
                    check[v[j]]=1;
                    k=j;
                    break;

                }
                //moves++;
            }

        }
        else{
            ans++;
        }
       // cout<<"ans--"<<ans<<endl;
    }
    cout<<ans<<endl;
    

}
return 0;
}