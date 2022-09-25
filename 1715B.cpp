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
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
  if(k*b>s){
    cout<<-1;
  }
  else{
    if(s-(k*(b+1)-1)>(k-1)*(n-1)){
cout<<-1;
    }
    else{
        if(s-(k*(b+1)-1)<0){
            cout<<s<<" ";
            s-=s;
            for(ll i=0;i<n-1;i++){
                cout<<s<<" ";
            }
        }
        else{
            cout<<k*(b+1)-1<<" ";
            s-=k*(b+1)-1;
            for(ll i=0;i<n-1;i++){
                if(s-(k-1)>=0){
                cout<<k-1<<" ";
                s-=k-1;
                }
                else{
                    cout<<s<<" ";
                    s-=s;
                }
                
            }
        }
    }
  }
  cout<<endl;
}
return 0;
}