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
    ll x,y;
    cin>>x>>y;
    if(x%2==0 && y%2==0){
        cout<<"Tonya"<<endl;
    }
    else if(x%2!=0 && y%2!=0){
        cout<<"Tonya"<<endl;
    }
    else{
cout<<"Burenka"<<endl;
    }
}
return 0;
}