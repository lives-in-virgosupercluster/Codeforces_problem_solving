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
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int flag=1;
    for (ll i = 1; i < n; i++)          
    {
        if(v[i]<v[0]){
            flag=0;
            break;

        }
        if(v[i]%v[0]!=0){
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
    
    
}
return 0;
}