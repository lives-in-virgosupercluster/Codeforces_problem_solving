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
    vector<ll>v(n+1,0);
    int flag=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]==1)
        flag=1;
    }
    sort(v.begin(),v.end());
    if(flag){
        int ans=0;
        for(int i=2;i<=n;i++){
            if(v[i]-v[i-1]==1){
                ans=1;
                break;
            }

        }
        if(ans)
        cout<<"NO"<<endl;
        else
        cout<<"yes"<<endl;
    
    }
    else{
        cout<<"yes"<<endl;
    }
}
return 0;
}