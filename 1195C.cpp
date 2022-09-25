#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n;
cin>>n;
vector<ll>a(n,0);
vector<ll>b(n,0);
for(ll i=0;i<n;i++)
cin>>a[i];
for(ll i=0;i<n;i++)
cin>>b[i];
ll res=0;
ll flag=0;
ll prev=0;
ll dp[n];
ll dp1[n];
ll dp2[n];
//dp---accepting a[i]
//dp1----accepting b[i]
//dp2---taking no one
for(ll i =0;i<n;i++){
    if(i==0){
        dp[i]=a[i];
        dp1[i]=b[i];
        dp2[i]=0;
    }
    else{
        //ll temp=max(dp1[i-1]+a[i],dp2[i-1]+a[i]);
        dp[i]=max(dp1[i-1]+a[i],dp2[i-1]+a[i]);
        dp1[i]=max(dp[i-1]+b[i],dp2[i-1]+b[i]);
        dp2[i]=max(dp[i-1],max(dp1[i-1],dp2[i-1]));

    }

}
cout<<max(dp[n-1],max(dp1[n-1],dp2[n-1]))<<endl;
return 0;
}