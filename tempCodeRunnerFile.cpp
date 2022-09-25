#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
//  ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
cout<<"?"<<" "<<1<<" "<<2<<endl;
vector<ll>v={4, 8, 15, 16, 23, 42};
fflush(stdout);
ll x;
cin>>x;
ll first=0;
ll second=0;
for(ll i=0;i<6;i++){
if(x%v[i]==0){
    ll num=x/v[i];
    first=v[i];
    for(ll j=0;j<6;j++){
        if(i!=j){
            if(v[j]==num){
second=v[j];
            }
        }
    }
}
}
cout<<"?"<<" "<<2<<" "<<3<<endl;
fflush(stdout);
cin>>x;
ll temp1=x/first;
string ans="!";
for(ll i=0;i<6;i++){
    if(temp1!=first && temp1==v[i]){
ans+=" "+second;
ans+=" "+first;
ans+=" "+temp1;
break;

    }
}
ll temp2=x/second;
for(ll i=0;i<6;i++){
    if(temp2!=second && temp2==v[i]){
        ans+=" "+first;
        ans+=" "+second;
        ans+=" "+temp2;
    }
}
cout<<"?"<<" "<<4<<" "<<5<<endl;
fflush(stdout);
cin>>x;
 first=0;
 second=0;
for(ll i=0;i<6;i++){
if(x%v[i]==0){
    ll num=x/v[i];
    first=v[i];
    for(ll j=0;j<6;j++){
        if(i!=j){
            if(v[j]==num){
second=v[j];
            }
        }
    }
}
}
cout<<"?"<<" "<<5<<" "<<6<<endl;
fflush(stdout);
cin>>x;
 temp1=x/first;
//string ans="!";
for(ll i=0;i<6;i++){
    if(temp1!=first && temp1==v[i]){
ans+=" "+second;
ans+=" "+first;
ans+=" "+temp1;
break;

    }
}
 temp2=x/second;
for(ll i=0;i<6;i++){
    if(temp2!=second && temp2==v[i]){
        ans+=" "+first;
        ans+=" "+second;
        ans+=" "+temp2;
    }
}
cout<<ans<<endl;
return 0;
}