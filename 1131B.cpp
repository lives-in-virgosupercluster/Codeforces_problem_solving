#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n;
cin>>n;
ll a=0;
ll b=0;
ll mx=0;
ll mn=0;
ll ans=1;
//int flag=0;
for(ll i=0;i<n;i++){
    ll x,y;
    cin>>x>>y;
    if(x==a && b==y){
        continue;
    }
    //flag=1;
  ll  mn1=min(x,y);
  ll mx1=max(x,y);
  if(mn1>=mx){

ans+=mn1-mx+1;
if(mx==mn){
    ans--;
}
  }
  mn=mn1;
  mx=mx1;
  a=x;
  b=y;


}

cout<<ans<<endl;

return 0;
}