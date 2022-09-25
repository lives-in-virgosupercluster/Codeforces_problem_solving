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
ll n,a,b;
cin>>n>>a>>b;
vector<ll>vans(n+1,0);
// for (ll i = 1; i < n+1; i++)
// {
//     /* code */  vans[i]=i;
// }

if(abs(a-b)>1 || a+b>n-2){
    cout<<-1<<endl;
}
else{
    ll l =1;
    ll r=n;
    int opt=0;
    if(a>b){
        opt=1;
    }

    for(int i=1;i<=n;i++){
        if(opt){
            cout<<l++<<" ";
        }
        else{
            cout<<r--<<" ";
        }
        if(i<=a+b){
            opt^=1;
        }

    }
    cout<<endl;
}
}
return 0;
}