#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
const int mod=1e9+7;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
ll r,c;
cin>>r>>c;
vector<ll>rnum(r,0);
vector<ll>cnum(c,0);
for(ll i=0;i<r;i++){
    cin>>rnum[i];
}
for(ll j=0;j<c;j++){
    cin>>cnum[j];
}
int flag=0;
ll ans=1;

for(ll i=0;i<r;i++){
    for(ll j=0;j<c;j++){
        if((i==cnum[j] && j<rnum[i]) || (j==rnum[i] && i<cnum[j])){
            flag=1;
            break;

        }
        else{
            if(i>cnum[j] && j>rnum[i]){
                ans=(ans*2)%mod;
            }
        }
        
    }
    if(flag)
    break;
    //cout<<ans<<endl;
}
if(flag)
ans=0;
cout<<ans<<endl;
return 0;
}
