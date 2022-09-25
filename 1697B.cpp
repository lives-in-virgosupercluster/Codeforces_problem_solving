#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,q;
cin>>n>>q;
vector<int>p(n,0);
for(int i=0;i<n;i++){
    cin>>p[i];

}
sort(p.begin(),p.end(),greater<int>());
vector<ll>sumdp(n,0);
for(int i=0;i<n;i++){
    if(i==0){
        sumdp[0]=p[0];
    }
    else{
        sumdp[i]=sumdp[i-1]+p[i];
    }
}



while(q--){
    int x,y;
    cin>>x>>y;
   
    if(x!=y)
    cout<<sumdp[x-1]-sumdp[x-y-1]<<endl;
    else
    cout<<sumdp[x-1]<<endl;

}
return 0;
}