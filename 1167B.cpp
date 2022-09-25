#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
//  ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
cout<<"?"<<" "<<1<<" "<<2<<endl;
vector<ll>v={4, 8, 15, 16, 23, 42};
//fflush(stdout);
ll x;
cin>>x;
ll first=0;
ll second=0;
for(ll i=0;i<6;i++){
if(x%v[i]==0){
   ll num=x/v[i];
    for(ll j=0;j<6;j++){
        if(i!=j){
            if(v[j]==num){
second=v[j];
 
    first=v[i];
   // cout<<v[i]<<endl;
    //cout<<v[j]<<endl;
    v[i]=-1;
    v[j]=-1;
    break;
            }
        }
    }
}
}
//cout<<first<<endl;
//cout<<second<<endl;
cout<<"?"<<" "<<2<<" "<<3<<endl;
fflush(stdout);
cin>>x;
ll temp1=x/first;


string ans="!";
//cout<<temp1<<endl;
if(x%first==0){
for(ll i=0;i<6;i++){
    if(temp1!=first && temp1==v[i]){
ans+=" "+to_string(second);
ans+=" "+to_string(first);
ans+=" "+to_string(temp1);
//cout<<"entere"<<endl;
break;

    }
}
}
//cout<<ans<<endl;
ll temp2=x/second;
//cout<<temp2<<endl;
if(x%second==0){
for(ll i=0;i<6;i++){
    if(temp2!=second && temp2==v[i]){
        ans+=" "+to_string(first);
        ans+=" "+to_string(second);
        ans+=" "+to_string(temp2);
    }
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
   
    for(ll j=0;j<6;j++){
        if(i!=j){
            if(v[j]==num){
second=v[j];
 first=v[i];
 
            }
        }
    }
}
}
//cout<<second<<endl;
//cout<<first<<endl;
cout<<"?"<<" "<<5<<" "<<6<<endl;
fflush(stdout);
cin>>x;
 temp1=x/first;
 //cout<<first<<endl;
 //cout<<temp1<<endl;
//string ans="!";
if(x%first==0){
for(ll i=0;i<6;i++){
    if(temp1!=first && temp1==v[i]){
ans+=" "+to_string(second);
ans+=" "+to_string(first);
ans+=" "+to_string(temp1);
break;

    }
}
}
//cout<<ans<<endl;
 temp2=x/second;
 if(x%second==0){
for(ll i=0;i<6;i++){
    if(temp2!=second && temp2==v[i]){
        ans+=" "+to_string(first);
        ans+=" "+to_string(second);
        ans+=" "+to_string(temp2);
    }
}
 }
cout<<ans<<endl;
return 0;
}