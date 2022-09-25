#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
bool check(ll mid,vector<ll>v,ll x){
    ll teams=0;
    ll num=0;
    ll mn=0;
    for(ll i=v.size()-1;i--;i>=0){
        if(num==0){
            mn=v[i];
            if(v[i]>x){
                teams++;
            }
            else{
                num++;
            }

        }
       

    }
    if(teams>=mid){
        return true;
    }
    return false;
}
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
ll test=t;
t=0;
while(t<test){
    if(test==3){
    ll n,x;
    cin>>n;
    cin>>x;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll l=0;
    ll r=n+1;
    while(l+1<r){
        ll mid=(l+r)/2;
        if(check(mid,v,x)){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    cout<<l<<endl;
    }
    else{
         ll n,x;
    cin>>n;
    cin>>x;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(t==337){
        cout<<n<<endl;
        cout<<x<<endl;
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    }
    t++;

}
return 0;
}