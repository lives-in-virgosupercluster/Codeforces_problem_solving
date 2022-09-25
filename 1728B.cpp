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
    if(n%2==0){
        for(ll i=n-2;i>=1;i--){
            cout<<i<<" ";
        }
        cout<<n-1<<" "<<n<<endl;
    }
    else{
        if((n-1)%3==0){
            cout<<2<<" "<<1<<" ";
            for(ll i=3;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else if(n%3==0){
            cout<<2<<" "<<1<<" "<<4<<" "<<3<<" ";
            for(ll i=5;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            for(ll i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}
return 0;
}