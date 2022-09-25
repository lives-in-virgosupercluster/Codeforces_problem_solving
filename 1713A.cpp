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
    vector<ll>x;
    vector<ll>y;
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        if(a==0){
            y.push_back(b);
        }
        else{
            x.push_back(a);
        }
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    // for(auto abc:x)
    // cout<<abc<<endl;
    ll moves=0;
    if(x.size()>0){
    if(x[0]<0){
moves+=abs(2*x[0]);
if(x.size()>1){
    if(x[x.size()-1]>0){
        moves+=2*x[x.size()-1];
    }
}
    }
    else{
        moves+=2*x[x.size()-1];
    }
    }
    if(y.size()>0){
    if(y[0]<0){
moves+=abs(2*y[0]);
if(y.size()>1){
    if(y[y.size()-1]>0){
        moves+=2*y[y.size()-1];
    }
}
    }
    else{
        moves+=2*y[y.size()-1];
    }
    }
    cout<<moves<<endl;
    
    
}
return 0;
}