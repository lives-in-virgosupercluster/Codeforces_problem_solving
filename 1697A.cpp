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
    int n,m;
    cin>>n>>m;
    vector<int>dis(n,0);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>dis[i];
        sum+=dis[i];
    }
    if(m>sum)
    cout<<0<<endl;
    else
    cout<<sum-m<<endl;
}
return 0;
}