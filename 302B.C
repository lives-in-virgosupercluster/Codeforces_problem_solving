#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
//  ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
int t;
//cin>>t;

    vector<ll>sum1;
    ll n,m;
    cin>>n>>m;
    //cout<<n<<m;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        sum+=x*y;
        sum1.push_back(sum);

    

}
vector<ll>p1;
for(int i=0;i<m;i++){
    ll z;
    cin>>z;
    p1.push_back(z);
}
for(int i=0;i<m;i++){
    ll l=-1;
   ll r=n-1;
   while(l+1<r){
       ll mid=(l+r)/2;
       if(sum1[mid]>=p1[i]){
           r=mid;
       }
       else{
           l=mid;
       }
       //cout<<r<<endl;
   }
   cout<<r+1<<endl;

}



return 0;
}