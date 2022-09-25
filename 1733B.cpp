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
    ll n,x,y;
    cin>>n>>x>>y;
    int flag=0;
    if(min(x,y)>0){
        flag=1;

    }
   else if(max(x,y)==0){
        flag=1;
    }
    else if((n-1)%max(x,y)!=0){
        flag=1;
    }
    if(flag!=1){
        ll temp=max(x,y);
        for(ll i=1;i<=n;i+=temp){
            ll count=0;
            while(count!=temp){
                cout<<i<<" ";
                count++;
            }
            if(i==1){
                i++;
            }
        }
        cout<<endl;



    }
    else{
        cout<<-1<<endl;
    }
    
}
return 0;
}