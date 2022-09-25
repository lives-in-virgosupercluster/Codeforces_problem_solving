#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
bool check(ll mid,ll a,ll b,ll n,ll k){
    if(mid*a>=k){
        return false;
    }
    else{
        k-=mid*a;
        if((n-mid)*b>=k){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll k,n,a,b;
    cin>>k>>n>>a>>b;
 if(b*n>=k){
    cout<<-1<<endl;
 }
 else{
    ll l=0;
    ll r=n+1;
    while(l+1<r){
        ll mid=(l+r)/2;
        if(check(mid,a,b,n,k)){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    cout<<l<<endl;
 }
}
return 0;
}