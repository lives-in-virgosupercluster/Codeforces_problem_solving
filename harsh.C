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
int n;
cin>>n;
vector<ll>v(n+1);
for(int i=0;i<n;i++){
    cin>>v[i];
}
ll max=-1;
ll min=10e9;
for(int i=0;i<n;i++){
    if(max<v[i]){
        max=v[i];
    }
    if(min>v[i]){
        min=v[i];
    }
}
cout<<max-min<<endl;
}
return 0;
}