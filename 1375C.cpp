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
    ll mn=INT64_MAX;
    ll mx=INT64_MIN;
    ll n;
    cin>>n;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        mn=min(mn,v[i]);
        mx=max(mx,v[i]);
    }
    if(v[n-1]==mn){
        cout<<"no"<<endl;
    }
    else{
        //cout<<"yes"<<endl;
        ll temp=v[n-1];
        ll flag=0;
        for(ll i=0;i<n;i++){
            if(temp<v[i]){
                if(i==0){
                    flag=1;
                    break;
                }
                else{
                    if(v[i-1]>v[i]){
                        flag=1;
                        break;
                    }
                    else{
                        v[i]=v[i-1];
                    }
                }
            }
            
        }
        if(!flag){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}
return 0;
}