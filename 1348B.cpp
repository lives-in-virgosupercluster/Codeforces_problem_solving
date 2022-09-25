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
    ll n,k;
    cin>>n>>k;
    set<ll>s;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        s.insert(x);
    }
    ll num=s.size();
    if(num>k){
        cout<<-1<<endl;
    }
    else{
        cout<<n*k<<endl;
        for(int i=0;i<n;i++){
            for(auto a:s){
                cout<<a<<" ";
            }
            for(ll i=0;i<k-num;i++){
                cout<<1<<" ";
            }
        }
        cout<<endl;
        
    }
    
}
return 0;
}
