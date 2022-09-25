#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
vector<ll>v(n+1,0);
vector<ll>ch(n+1,1);
for(ll i =1;i<=n;i++){
    ll x,y;
    cin>>x>>y;
    if(y==0){
        ch[i]=0;
        if(x!=-1){
            ch[x]=0;
        }
       
    }
}
int flag=1;
for(int i=1;i<=n;i++){
    if(ch[i]==1){
        cout<<i<<" ";
        flag=0;
    }
}
if(flag==1)
cout<<-1<<endl;
return 0;
}