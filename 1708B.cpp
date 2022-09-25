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
    ll l,r;
    cin>>l>>r;
    
        ll num=1;
        vector<ll>arr;
        ll don=0;
        while(num<=n){
            int flag=0;
          ll xmod=r%num;
          if(xmod==0){
            arr.push_back(r);
            flag=1;

          }
          else{
            ll k=r-xmod;
            if(k>=l){
                arr.push_back(k);
                flag=1;
            }
          }
        
        if(flag==0){
            cout<<"no"<<endl;
            
            don=1;
            break;
        }
        num++;
        }
        
        if(don==0){
            cout<<"yes"<<endl;
            for(ll a:arr){
                cout<<a<<" ";
            }
            cout<<endl;
        }
    

}
return 0;
}