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
    vector<ll>a(26,0);
    for(ll i=0;i<2;i++){
        for(ll j=0;j<2;j++){
            char c;
            cin>>c;
            a[c-'a']++;

        }
    }
    ll count=0;
    for(ll i=0;i<26;i++){
        if(a[i]>0){
            count++;
        }
    }
    if(count==4){
        cout<<3<<endl;
    }
    else if(count==3){
        cout<<2<<endl;
    }
    else if(count==2){
        cout<<1<<endl;
    }
    else if(count==1){
        cout<<0<<endl;
    }
}
return 0;
}