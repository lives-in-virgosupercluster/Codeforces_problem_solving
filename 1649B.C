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
    vector<ll>v;
    ll sum=0;
    ll max=-1;
    int flag=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
        sum+=x;
        if(max<x){
            max=x;
        }
        if(x!=0){
            flag=1;
        }
    }
    if(flag){
    if(sum<2*max){
        cout<<2*max-sum<<endl;
    }
    else{
        cout<<1<<endl;
    }
    }
    else{
        cout<<0<<endl;
    }
}
return 0;
}