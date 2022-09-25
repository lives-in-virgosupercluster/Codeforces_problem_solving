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
    vector<ll>num;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<(i+1)){
            num.push_back(i+1);
        }

    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(v[i]<i+1){
            if(num[0]<v[i]){
                ll l=0;
                ll r=num.size();
                while(l+1<r){
                    ll mid=(l+r)/2;
                    if(num[mid]<v[i]){
                        l=mid;
                        
                    }
                    else{
                        r=mid;
                    }

                }
                ans+=l+1;
            }
        }
    }
    cout<<ans<<endl;


}

return 0;
}