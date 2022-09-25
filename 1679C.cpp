#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n,q;
cin>>n>>q;
vector<ll>rows(n+1,0);
vector<ll>columns(n+1,0);
set<ll>x;
set<ll>y;
for (ll i = 1; i < n+1; i++)
{
    x.insert(i);
    y.insert(i);
}

for(ll i=0;i<q;i++){
    ll t;
    ll rookx;
    ll rooky;
    ll x1,x2,y1,y2;
    cin>>t;
    if(t==1){
        cin>>rookx;
        cin>>rooky;
        rows[rookx]++;
        columns[rooky]++;
        x.erase(rookx);
        y.erase(rooky);
       

    }
    else if(t==2){
        cin>>rookx;
        cin>>rooky;
        rows[rookx]--;
        columns[rooky]--;
        if(rows[rookx]==0){
            x.insert(rookx);
        }
        if(columns[rooky]==0){
            y.insert(rooky);
        }
        

    }
    else {
        cin>>x1;
        cin>>y1;
        cin>>x2;
        cin>>y2;
        int flag=1;
        auto itr=x.lower_bound(x1);
        if(itr!=x.end() && *itr<=x2){
            flag=0;

        }
        
        // for(ll j=x1;j<=x2;j++){
        //     if(x[j]==0){
        //         flag=0;
        //         break;
        //     }
        // }
        if(flag==0){
            flag=1;
            auto itr=y.lower_bound(y1);
        if(itr!=y.end() && *itr<=y2){
            flag=0;

        }
        }
        if(flag){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
            // for(ll j=y1;j<=y2;j++){
            //     if(y[j]==0){
            //         flag=0;
            //         break;
            //     }
            // }
            // if(flag==0){
            //     cout<<"no"<<endl;
            // }
            // else{
            //     cout<<"yes"<<endl;
            // }


        
    
    }
}


return 0;
}