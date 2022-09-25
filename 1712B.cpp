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
    for(ll i=1;i<n;i+=2){
        cout<<i+1<<" "<<i<<" ";
    }
    cout<<endl;
   }
   else{
    for(ll i=1;i<n;i+=2){
        if(i==1){
            cout<<i<<" ";
            i-=1;
        }
        else{
            cout<<i+1<<" "<<i<<" ";

        }
    }
    if(n==1){
        cout<<1;
    }
    cout<<endl;
    
   }
}
return 0;
}