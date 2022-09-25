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
    ll a,l,r;
    cin>>l>>r>>a;
    if(l/a==r/a){
        cout<<r/a+r%a<<endl;
    }
    else{
        cout<<max((r/a)-1+a-1,(r/a)+r%a)<<endl;
    }
}
return 0;
}