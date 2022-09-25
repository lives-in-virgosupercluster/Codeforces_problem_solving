#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
void bits(ll x,int l,vector<ll>&bits1){
    int j=0;
    int i=0;
    while(x>0){
        j=x%2;
        bits1[i++]+=j;
        x=x/2;
        
    }
    if(i<l){
        while(i<l-1){
            bits1[i++]+=0;
        }
    }

}
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
int n,l;
cin>>n>>l;
vector<ll>num(n,0);
vector<ll>bits1(30,0);
vector<ll>ans(30,0);

for(int i=0;i<n;i++){
cin>>num[i];
 bits(num[i],l,bits1);
}
ll sum=0;
// for(int i=0;i<l;i++){
//     cout<<bits1[i]<<endl;
// }
ll z=0;
for(int i=0;i<l;i++){
    sum+=bits1[i];
    z=max(sum,n-sum);
    if(z==n-sum){
        ans[i]=0;
    }
    else{
        ans[i]=1;
    }
    sum=0;

    

}
ll ans1=0;
for(int i=0;i<l;i++){
 ans1+=ans[i]*pow(2,i);
}
cout<<ans1<<endl;
}
return 0;
}