#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n;
cin>>n;
ll q;
cin>>q;
set<pair<ll,ll>>s;
ll bad_ne=0;
for(ll i=0;i<q;i++){
    ll row,col;
    cin>>row;
    cin>>col;
    bool was_forbidden=s.count({row,col});
    
    for(ll k=1;k<=2;k++){
        for(ll j=col-1;j<=col+1;j++){
            if(k!=row){
            if(s.count({k,j})){
                

                if(was_forbidden){
                    //cout<<k<<" "<<j<<endl;
                    bad_ne--;
                    //cout<<"decrementing value"<<endl;

                }
                else{
                    bad_ne++;
                   // cout<<k<<" "<<j<<endl;
                    //cout<<"incrementing value"<<endl;
                }
            }
        }
        }

    }
    if(bad_ne>0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
   // cout<<bad_ne<<endl;
    if(s.count({row,col})){
        s.erase({row,col});
    }
    else{
        s.insert({row,col});
    }
}


return 0;
}
