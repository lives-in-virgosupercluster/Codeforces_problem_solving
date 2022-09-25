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
    vector<ll>v(n+1,0);
   // priority_queue<ll>q;
    for(ll i=1;i<=n;i++)
    cin>>v[i];
    vector<ll>mx(k,-1);
    for(ll i=1;i<=n;i++){
        
        mx[i%k]=max(mx[i%k],v[i]);
        
    }
    ll sum=0;
    for(ll i=0;i<k;i++){
        sum+=mx[i];
    }
    cout<<sum<<endl;
}
  
return 0;
}