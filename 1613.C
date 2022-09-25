#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
//  ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
int t;
cin>>t;
while(t--){
int n;
ll h;
cin>>n>>h;
vector<ll>v(n,0);
for (int i = 0; i < n; i++)
{
    cin>>v[i];
}
// l is always bad in this maintaining this invariant
// r is always right
ll r=1e18;
ll l=0;
while(l+1<r){
    ll sum=0;
    ll mid=(l+r)/2;
    for(int i=1;i<n;i++){
        sum+=min(mid,v[i]-v[i-1]);

    }
    sum+=mid;
    
    if(sum>=h){
        r=mid;
        //cout<<r<<endl;
    }
    else{
        l=mid;
        //cout<<l<<endl;
    }
   

}
cout<<r<<endl;

}
return 0;
}