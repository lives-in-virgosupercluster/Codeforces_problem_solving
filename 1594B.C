#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
unsigned long long int pow1(ll j,ll i){
    if(i==1){
        return j;
    }
    else if(i==0){
        return 1;
    }
    return pow1(j,i-1)*j;
}

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
ll num=1e9+7;
cin>>t;
//cout<<pow1(2,2)<<endl;
while(t--){
ll n,k;
cin>>n>>k;
//ll j=n;
ll ans=0;
ll count=0;
ll power=1;
while(k!=0){
    int a=k%2;
     //power
    k=k/2;
    //ans+=(a*pow1(n,count))%num;
    ans+=a*power;
    ans%=num;
    power*=n;
    power%=num;
    
    //cout<<ans<<endl;
    //count++;

}
cout<<ans%num<<endl;

}
}