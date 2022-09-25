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
    int flag=0;
    int zerocount=0;
    
    vector<vector<ll>>table;
    for (ll i = 0; i < 2; i++)
    {
        vector<ll>row;
        for(ll j=0;j<2;j++){
            ll x;
            cin>>x;
            if(x==1)
            flag=1;
            row.push_back(x);
            if(x==0)
            zerocount=1;

        }
        table.push_back(row);
    }
    if(flag){
        if(zerocount==0){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    
    else{
        cout<<0<<endl;
    }
    
}
return 0;
}