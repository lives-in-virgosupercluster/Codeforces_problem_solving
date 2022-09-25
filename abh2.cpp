#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
int minimumflips(int n,string s){
      int count=0;
    int ans=0;
for(int i=0;i<n;i++){
    if(s[i]=='?'){
        count++;
        
        }
    else{
        if(count>0){
            if(i-count-1>=0){
            if(s[i-count-1]!=s[i]){

ans+=1;


            }
            }
        }
        count=0;
    }
    }
    
    return ans;
}

int main(){
 

    ll n;
    cin>>n;
    string s;
    cin>>s;
    cout<<minimumflips(n,s);


return 0;
}