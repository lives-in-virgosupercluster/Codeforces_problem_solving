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
    vector<string>v;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    if(n ==1 || m==1){
        cout<<"yes"<<endl;
    }
    else{
        int flag=1;
        int sum=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            sum+=(v[i][j]-'0')+(v[i][j+1]-'0')+(v[i+1][j]-'0')+(v[i+1][j+1]-'0');
            if(sum==3){
                flag=0;
                break;
            }
            sum=0;
           
            
        }
    }
    if(flag){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    }
}
return 0;
}