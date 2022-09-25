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
   vector<bool>ans(27,false);
   int m=0;
   for(int i=0;i<s.length();i++){
       if(ans[s[i]-'a']){
           m+=2;
           for(int i=0;i<27;i++){
               ans[i]=false;
           }

       }
       else
       ans[s[i]-'a']=true;
   }
   cout<<s.length()-m<<endl;
}
return 0;
}