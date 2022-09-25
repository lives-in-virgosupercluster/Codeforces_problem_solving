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
    cout<<2<<endl;
    ll pow=1;
    vector<ll>ans;
    
    ll j=0;

    for(ll i=1;i<=n;i++){
        if(i%2==1){
            ll pow=i;
            while(pow<=n){
                ans.push_back(pow);
                pow*=2;
            }
        }
       
    }
    for(auto a:ans){
        cout<<a<<" ";
    }
    cout<<endl;
}
return 0;
}