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
    vector<ll>v(n,0);
    ll flag=1;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%10==5){
            v[i]+=5;
            //flag=0;
        }
        if(v[i]%10==0){
            flag=0;
        }
    }
    sort(v.begin(),v.end());
    if(!flag){
    if(v[0]==v[n-1]){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    }
    else{
        for(ll i=0;i<n;i++){
            while(v[i]%10!=2){
                v[i]+=v[i]%10;
            }
        }
        ll flag2=0;
        ll flag12=0;
        for(ll i=0;i<n;i++){
            if(v[i]%20==2){
                flag2=1;
            }
            else{
                flag12=1;
            }
        }
        if(flag2 && flag12)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
    }

}
return 0;
}