#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
vector<ll>v(n,0);
ll sumx=0;
for(int i=0;i<n;i++){
cin>>v[i];
sumx+=v[i];
}
int m;
cin>>m;
while(m--){
    ll min=1e19;
    ll x,y;
    cin>>x>>y;
    for(int i=0;i<n;i++){
        ll sum=0;
        if(x>=v[i]){
            sum+=x-v[i];
        }
        ll leftsum=sumx-v[i];
        if(leftsum<=y){
            sum+=y-leftsum;
        }
        if(min>sum){
            min=sum;
        }
    }
    cout<<min<<endl;
}

return 0;
}