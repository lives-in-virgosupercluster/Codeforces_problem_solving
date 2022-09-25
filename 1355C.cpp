#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;

    ll n,s;
    cin>>n>>s;
    if(n>s/2){
        cout<<"no"<<endl;

    }
    else{
        if(n==1){
            cout<<"yes"<<endl;
            cout<<s<<endl;
            cout<<1<<endl;
        }
        else{
        if(s%2==0){
            cout<<"yes"<<endl;
            ll x=s;
            for(ll i=0;i<n-1;i++){
                cout<<2<<" ";
                x-=2;
            }
            cout<<x<<endl;
                
            

            //cout<<temp<<" ";
            //cout<<endl;
            cout<<1<<endl;
        }
        else{
            cout<<"yes"<<endl;
            //cout<<"3"<<" ";
            //ll temp=s-3;
            cout<<3<<" ";
            ll temp=s-3;
            for(ll i=0;i<n-2;i++){
                cout<<2<<" ";
                temp-=2;
            }
            cout<<temp<<endl;
            cout<<1<<endl;
            
            
        }
        }

    }

return 0;
}