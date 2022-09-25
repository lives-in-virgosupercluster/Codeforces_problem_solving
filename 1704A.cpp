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
    ll m;
    cin>>m;
    string a;
    cin>>a;
    
    string b;
    cin>>b;
    ll ini=0;
    //ll flag=1;
    ll res=n-m;
    ll flag=0;
    for(ll i=0;i<=res;i++){
        if(a[i]==b[0]){
flag=1;
break;
        }
    }
    if(flag){
        string p="";
        p+=b[0];
        for(ll i=res+1;i<n;i++){
            p+=a[i];
        }
        for(ll i=0;i<m;i++){
            if(p[i]!=b[i]){
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    else{
        cout<<"no"<<endl;
    }
}
return 0;
}