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
    vector<ll>v(n+1,0);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    int flag=0;
    ll temp=0;
    ll odd=0;
    ll even=0;
    for(int i=1;i<=n;i++){
        if(v[i]%2==0){
            if(even>v[i]){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
            else{
                even=v[i];
            }
        }
        else{
            if(odd>v[i]){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
            else{
                odd=v[i];
            }
        }
       
    }
    if(!flag)
    cout<<"Yes"<<endl;
}
return 0;
}