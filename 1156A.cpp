#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;

ll a,b,c;
vector<ll>v(n,0);
for(ll i=0;i<n;i++){
    cin>>v[i];
}
ll ans=0;
int flag=0;
ll count=0;
if(n>2){
for(ll i=2;i<n;i++){
    if(v[i-2]==3 && v[i-1]==1 && v[i]==2){
ans+=6;
count++;
    }
    else if(v[i-2]==2 && v[i-1]==1 && v[i]==3){
        ans+=7;
    }
    else if(v[i-2]==2 && v[i-1]==1 && v[i]==2){
        ans+=6;
    }
    else if(v[i-2]==3 && v[i-1]==1 && v[i]==3){
        ans+=8;
    }
    else if(v[i-2]==1 && v[i-1]==2 && v[i]==1){
        ans+=6;
    }
    else if(v[i-2]==1 && v[i-1]==3 && v[i]==1){
        ans+=8;
    }
    else{
        flag=1;
        break;
    }

}
}
else{
    if(n==2){
        if(v[0]==v[1]){
            flag=1;
        }
        else if(v[0]+v[1]==5){
            flag=1;
        }
    }
}
if(flag){
    cout<<"Infinite"<<endl;
}
else{
    cout<<"Finite"<<endl;
    ll ans=0;
    for(ll i=1;i<n;i++){
            if(v[i-1]+v[i]==3){
                ans+=3;
            }
            else{
                ans+=4;
            }
    }
    ans-=count;
    cout<<ans<<endl;
}
return 0;
}