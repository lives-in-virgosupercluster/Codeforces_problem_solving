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
    int n,x;
    cin>>n>>x;
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    if(n>=2*x){
        cout<<"Yes"<<endl;
        

    }
    else{
        //vector<int>ans;
        vector<int>ans;
        for(int i=n-x+1;i<=x;i++){
            //ans.push_back(v[i]);
            ans.push_back(v[i]);
        }
        sort(v.begin(),v.end());
        int flag =1;
        int j=0;
        for(int i=n-x+1;i<=x;i++){
            if(ans[j]!=v[i]){
                flag =0;
                cout<<"NO"<<endl;
                break;
                
            }
            j++;
        }
        if(flag)
        cout<<"Yes"<<endl;
        
    }
}
return 0;
}