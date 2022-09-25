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
    string s;
    string t;
    cin>>n;
    cin>>s;
    cin>>t;
    int flag=0;
   vector<pair<char,int>>spos;
   vector<pair<char,int>>tpos;
   for(int i=0;i<n;i++){
    if(s[i]!='b'){
        spos.push_back({s[i],i});

    }
    if(t[i]!='b'){
        tpos.push_back({t[i],i});
    }
   }
   if(tpos.size()!=spos.size()){
    cout<<"NO"<<endl;
   }
   else{
    int flag=0;
    for(int i=0;i<tpos.size();i++){
        if(tpos[i].first!=spos[i].first){
            cout<<"NO"<<endl;
            flag=1;
            break;
        }
        else{
            if(spos[i].first=='c'){
                if(spos[i].second<tpos[i].second){
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
            }
            else if(spos[i].first=='a'){
                if(spos[i].second>tpos[i].second){
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
            }
        }
    }
    if(!flag)
    cout<<"YES"<<endl;

   }

}
return 0;
}