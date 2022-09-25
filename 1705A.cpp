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
    ll n,x;
    cin>>n>>x;
    vector<ll>v(2*n,0);
    ll max=-1;
    ll min=10000;
    for (ll i = 0; i < 2*n; i++)
    {
        cin>>v[i];
        if(min>v[i]){
            min=v[i];
        }
        if(max<v[i]){
            max=v[i];
        }
    }
    sort(v.begin(),v.end());
    ll i=0;
    ll flag=1;
    for(ll j=n;j<2*n;j++){
        if(v[j]-v[i]<x){
            cout<<"no"<<endl;
            //cout<<i<<j<<endl;
            flag=0;
            break;

        }
        i++;

    }
    if(flag){
        cout<<"yes"<<endl;
    }
    
}
return 0;
}