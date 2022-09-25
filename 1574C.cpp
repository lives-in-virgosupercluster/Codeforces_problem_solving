#include <bits/stdc++.h>
#define ll  long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
vector<ll>h(n,0);
ll sumh=0;
for(int i=0;i<n;i++){
    cin>>h[i];
    sumh+=h[i];
}
int m;
cin>>m;
vector<ll>dd(m,0);
vector<ll>da(m,0);
sort(h.begin(),h.end());
for(int i=0;i<m;i++){
    cin>>dd[i]>>da[i];
}
for(int i=0;i<m;i++){
    ll sum=LLONG_MAX;
   ll num=lower_bound(h.begin(),h.end(),dd[i])-h.begin();
   if(num>0)
   sum=min(sum,dd[i]-h[num-1]+max(0LL,(da[i]-(sumh-h[num-1]))));

    if(num<n)
    sum=min(sum,max(0LL,da[i]-(sumh-h[num])));
    cout<<sum<<endl;
}
return 0;
}