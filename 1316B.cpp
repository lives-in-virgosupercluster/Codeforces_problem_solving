#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
string modified(string s,int k,int n){
    string prefix=s.substr(k-1,n-k+1);
    string suffix=s.substr(0,k-1);
    if(n%2 == k%2){
        reverse(suffix.begin(),suffix.end());
    }
    return prefix+suffix;
}

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll best_k=1;
  string diff=modified(s,1,n);
  string temp;
    for(int k=2;k<=n;k++){
        temp=modified(s,k,n);
        if(temp<diff){
            diff=temp;
            best_k=k;
        }
        
    }
    cout<<diff<<endl;
    cout<<best_k<<endl;
}
return 0;
}