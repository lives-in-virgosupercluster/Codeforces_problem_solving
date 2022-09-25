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
    int n;char c;
    string s;
    cin>>n>>c>>s;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(s[i]!=c){
            flag=true;
            break;
        }
    }
    if(flag){
        vector<int>ans;
        for(int i=1;i<=n;i++){
            flag=true;
            for(int j=i;j<n+1;j++){
                flag&=(s[j-1]==c);
                j+=i-1;
                
            }
            if(flag){
                ans.push_back(i);
                break;
            }
        }
        if(ans.size()==0){
            cout<<2<<endl;
            cout<<n-1<<" ";
            cout<<n<<endl;
        }
        else{
            cout<<ans.size()<<endl;
            for(int z:ans)
            cout<<z<<" ";
            cout<<endl;
        }
    }
    else{
        cout<<0<<endl;
    }

}
return 0;
}