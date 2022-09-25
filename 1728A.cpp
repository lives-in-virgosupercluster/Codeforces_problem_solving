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
    for(ll i=0;i<n;i++)
    cin>>v[i];
    ll mx=-1;
    ll index=0;
    for(ll i=0;i<n;i++){
    if(mx<v[i]){
index=i;
mx=v[i];
    }
    }
    cout<<index+1<<endl;
}
return 0;
}