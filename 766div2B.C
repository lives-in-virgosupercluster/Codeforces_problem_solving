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
ll n,m;
cin>>n>>m;
//ll k=0;
vector<vector<ll>> maxdis(n+1,vector<ll>(m+1,0));
vector<ll>ans(n*m,0);
vector<ll>maxsort(4,0);
ll max1=0;
ll max2=0;
ll max3=0;
ll max4=0;
ll k=0;
for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        
        max1=abs(n-1-i)+abs(m-1-j);
        max2=abs(n-1-i)+abs(j-0);
        max3=abs(i)+abs(j-0);
        max4=abs(i)+abs(m-1-j);
        maxsort[0]=max1;
        maxsort[1]=max2;
        maxsort[2]=max3;
        maxsort[3]=max4;
        sort(maxsort.begin(),maxsort.end(),greater<ll>());
        
        ans[k++]=maxsort[0];
        // cout<<"i-- "<<i<<"j-- "<<j<<endl;
        // cout<<ans[i+j]<<endl;
        
    }

}
sort(ans.begin(),ans.end());
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;
   

}
return 0;
}