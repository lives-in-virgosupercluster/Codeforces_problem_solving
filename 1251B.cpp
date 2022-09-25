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
vector<string>grp(n);
int evenlen=0;
int flag=0;
for(ll i=0;i<n;i++){
  //  string s;
    cin>>grp[i];
  if(grp[i].length()%2!=0)
  flag=1;

}
for(ll i=0;i<n;i++){
    ll countz=0;
    ll counto=0;
    if(grp[i].length()%2==0){
    for(ll j=0;j<grp[i].length();j++){
        if(grp[i][j]=='1'){
            counto++;
        }
        else{
            countz++;
        }
    }
    if(counto%2!=0 && countz%2!=0){
        evenlen++;
    }

    }
}
if(evenlen%2!=0 && flag==0){
    cout<<n-1<<endl;
}
else{
    cout<<n<<endl;
}
}


return 0;
}
