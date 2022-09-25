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
    ll x=n%11;
    if(n>=111*x){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

}
return 0;
}