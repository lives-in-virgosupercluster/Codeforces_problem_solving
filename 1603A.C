#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
bool div(ll a,ll b,ll c){
    for(ll i=b;i<=c;i++){
        if(a%i!=0){
            return 1;
        }
        //cout<<"i"<<"for"<<i<<endl;
    }
    return 0;
}
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
vector<ll>v(n+1,0);
for (ll i = 1; i <= n; i++)
{
    cin>>v[i];
}

int flag=0;
for(ll i=1;i<=n;i++){
   // cout<<v[i]<<endl;
    if(i<22){
        flag=div(v[i],2,i+1);
        //cout<<i<<endl;
        //cout<<"flag for "<<v[i]<<" "<<flag<<endl;
        if(!flag){
            cout<<"NO"<<endl;
            break;
        }
        
    }
    else{
        //cout<<"Yes"<<endl;
        break;
    }

}
if(flag){
    cout<<"yes"<<endl;
}



}
return 0;
}