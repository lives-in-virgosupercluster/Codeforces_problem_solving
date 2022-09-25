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
    //vector<int>v(n+1,0);
    cin>>n>>m;
    vector<int>v(n+1,0);
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        v[b]=1;
    }
    int x=0;
    for(int i=1;i<=n;i++){
        if(v[i]!=1){
            x=i;
            break;
        }
    }
    //cout<<x<<endl;
    for(int i=1;i<=n;i++){
        if(i!=x){
            cout<<x<<" "<<i<<endl;
        }
    }
}
return 0;
}