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
    ll flag=1;
    if(v[0]%2!=0){
        flag=0;

    }
    vector<ll>odd;
    vector<ll>even;
    for(ll i=0;i<n;i++){
        if(v[i]%2==0){
            even.push_back(i+1);
        }
        else{
            odd.push_back(i+1);
        }

    }
    if(flag==0){
        cout<<n-1<<endl;
        for(ll i=0;i<odd.size()-1;i++){
            cout<<odd[i]<<" "<<odd[odd.size()-1]<<endl;

        }
        for(ll i=0;i<even.size();i++){
            cout<<1<<" "<<even[i]<<endl;
        }
    }
    else{
        cout<<n-1<<endl;
        for(ll i=0;i<even.size()-1;i++){
            cout<<even[i]<<" "<<even[even.size()-1]<<endl;
        }
        for(ll i=0;i<odd.size();i++){
            cout<<1<<" "<<odd[i]<<endl;
        }
    }
}
return 0;
}
