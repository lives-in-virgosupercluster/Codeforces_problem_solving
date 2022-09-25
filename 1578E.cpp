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
    double h,p;
    cin>>h>>p;
    ll pownum=1;
    ll time=0;
    if(p!=1){
    
    while(pownum<=p){
        pownum*=2;
        time++;
    }
    pownum=(ll)(pow(2,time)-1);
    ll x=ceil(((pow(2,h)-1)-pownum)/p);
    time+=x;
    cout<<time<<endl;
}
else{
    ll x=(ll)(pow(2,h));
    x--;
    cout<<x<<endl;

}

}
return 0;
}