#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int solve(ll n){
    ll x=n;
    if(n==1){
        return 0;
    }
    if(n%2!=0 || n==2){
        return 1;
    }
    while(x%2==0){
        x/=2;
    }
    if(x==1){
        return 0;
    }
    n/=2;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 1;
        }

    }
    return 0;
   
}


int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    //turn=0;
    int x=solve(n);
    if(x==0){
cout<<"FastestFinger"<<endl;
    }
    else{
        cout<<"Ashishgup"<<endl;
    }
}
return 0;
}