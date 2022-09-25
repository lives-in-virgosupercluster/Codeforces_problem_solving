#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
int check(vector<ll>a,int b){
    ll sum=0;
    ll ans=0;
    ll j=0;
    for(ll i=0;i<a.size();i++){
        sum+=a[i];
        if(sum==b){
            ans+=i-j;
            j=i+1;
            sum=0;
        }
        else if(sum>b){
            return -1;
        }

    }
    return ans;
}

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n,0);
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    ll ans=INT64_MAX;
    for(ll i=1;i*i<=sum;i++){
        if(sum%i==0){
            ll f=i;
            ll f1=sum/i;
            ll a=check(v,i);
            ll b=check(v,f1);
            if(a!=-1){
                ans=min(a,ans);

            }
            if(b!=-1){
                ans=min(b,ans);
            }

        }
    }
    cout<<ans<<endl;


}
return 0;
}