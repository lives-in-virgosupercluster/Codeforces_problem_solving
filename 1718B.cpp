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
    ll n,k;
    cin>>n>>k;
    ll oddpairs=n/2;
    ll evenpairs=n/2;
    ll count=0;
    vector<pair<ll,ll>>p;
    int flag=0;
   for(ll i=1;i<=n;i+=2){
    if((i+1)%4==0){
        
        p.push_back({i,i+1});
    }
    else{
        if(k%2==0){
            if(((i+1+k)*i)%4==0){
                p.push_back({i+1,i});
            }
            else{
                flag=1;
                break;
            }
            

            }
            else{
                
                if(((i+k)*(i+1))%4==0){
                    p.push_back({i,i+1});
                }
                else{
                    flag=1;
                    break;
                }
            
        }
    }
   }
   if(flag)
   cout<<"no"<<endl;
   else{
    cout<<"yes"<<endl;
    for(ll i=0;i<p.size();i++){
        cout<<p[i].first<<" ";
        cout<<p[i].second<<endl;
    }
   }
}
return 0;
}