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
    ll n,m,sx,sy,d;
    cin>>n>>m>>sx>>sy>>d;
   // ll sum=abs(sx-n)+abs(sy-m);
   
if((sy+d>=m || sx-d<=1) && (sy-d<=1 || sx+d>=n )){
cout<<-1<<endl;

}
else{
    cout<<n-1+m-1<<endl;
}
}
return 0;
}