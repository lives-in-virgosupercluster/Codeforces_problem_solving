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
    ll n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    int flag=0;
    for(int i=0;i<16;i++){
        ll up,rp,dp,lp;
        up=u;
        rp=r;
        dp=d;
        lp=l;
        if(i & 1){
            up-=1;
            rp-=1;
        }
        if(i & 2){
            up-=1;
            lp-=1;
        }
        if(i & 4){
            dp-=1;
            rp-=1;
        }
        if(i & 8){
            dp-=1;
            lp-=1;
        }
        if(lp>=0 && up>=0 && rp>=0 && dp>=0){
            if(lp<=n-2 && up<=n-2 && dp<=n-2 && rp<=n-2){
                cout<<"yes"<<endl;
                flag=1;
                break;
            }
        }
    }
    if(!flag){
        cout<<"no"<<endl;
    }
}
return 0;
}