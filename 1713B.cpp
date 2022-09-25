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
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    int flag=0;
    int f2=0;
    int ans=0;
   for(ll i=1;i<n;i++){
    if(v[i-1]<v[i]){
        flag=1;
        if(f2==1){
            ans=1;
            break;

        }
    }
    else if(v[i-1]>v[i]){
        f2=1;

    }
   }
   if(ans){
    cout<<"no"<<endl;
   }
   else{
    cout<<"yes"<<endl;
   }
}
return 0;
}