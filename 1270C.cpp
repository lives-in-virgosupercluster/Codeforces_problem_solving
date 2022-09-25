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
    ll x=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        x^=v[i];
    }
    ll sum=x;
    ll tempsum=0;
    for(ll i=0;i<n;i++){
tempsum+=v[i];

    }
    tempsum+=sum;
    cout<<2<<endl;
    cout<<tempsum<<" "<<sum<<endl;


}
return 0;
}