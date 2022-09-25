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
    ll n;
    cin>>n;
    ll moves=0;
        ll num=0;
    vector<ll>v(n+1,0);
    int flag=0;
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    if(n==3){
        if(v[2]%2!=0){
            flag=1;
            


        }
        else{
            moves=v[2]/2;
        }
        
    }
    else{
       
    for(ll i=2;i<n;i++){
        if(v[i]%2==0){
            moves+=v[i]/2;
        }
        else{
            moves+=(v[i]+1)/2;
        }
        if(v[i]==1){
            num++;

        }
        
    }
    if(num==n-2){
        flag=1;
    }
    }
    if(!flag)
    cout<<moves<<endl;
    else{
        cout<<-1<<endl;
    }
}
return 0;
}