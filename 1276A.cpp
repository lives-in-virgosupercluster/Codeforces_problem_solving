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
    string s;
    cin>>s;
    
    vector<ll>r;
   for(string temp:{"twone","one","two"}){
    for(size_t pos=0;(pos=s.find(temp,pos))!=string::npos;){
        s[pos+temp.length()/2]='?';
        r.push_back(pos+temp.length()/2);

    }
   }
  
   cout<<r.size()<<endl;
   for(ll i=0;i<r.size();i++){
    r[i]++;
    cout<<r[i]<<" ";
   }
   cout<<endl;
}

return 0;
}