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
    ll x;
    cin>>x;
    ll a,b,c;
    //cin>>a>>b>>c;
    vector<ll>v(4,0);
    for(ll i=1;i<=3;i++){
        cin>>v[i];
    }
    if(v[x]==0){
        cout<<"no"<<endl;
    }
    else{
        int flag=1;
        for(ll i=1;i<=3;i++){
            if(v[i]==i){
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}
return 0;
}