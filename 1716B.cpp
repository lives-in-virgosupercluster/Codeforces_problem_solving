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
    cout<<n<<endl;
    for(ll i=1;i<=n;i++){
        v[i]=i;
    }
    for(ll i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    ll temp=v[n];
    v[n]=v[1];
    v[1]=temp;
    for(ll i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    for(ll i=2;i<n;i++){
        ll temp=v[i-1];
       // v[i]=v[i+1];
        v[i-1]=v[i];
        v[i]=temp;
        for(ll j=1;j<=n;j++){
            cout<<v[j]<<" ";
        }
        cout<<endl;
    }

}
return 0;
}