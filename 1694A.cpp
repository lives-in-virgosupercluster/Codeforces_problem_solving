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
    int z,o;
    cin>>z;
    cin>>o;
    string ans="";
    while(z >0 && o>0){
        ans+='0';
        z--;
        ans+='1';
        o--;


    }
    while(z>0){
        ans+='0';
        z--;
    }
    while(o>0){
        ans+='1';
        o--;

    }
    cout<<ans<<endl;
}
return 0;
}