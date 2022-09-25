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
    ll p;
    cin>>p;
    vector<ll>v(27,0);
    vector<ll>count(27,0);
    ll sum=0;
    for(ll i=0;i<s.length();i++){
        
        v[s[i]-'a']+=(s[i]-'a')+1;
        sum+=(s[i]-'a')+1;
        count[s[i]-'a']++;
    }
    ll sumtemp=0;
    vector<ll>counttemp(27,0);
    //string ans="";
    ll temp=0;
    for(ll i=0;i<27;i++){
        temp=sumtemp;
        sumtemp+=v[i];
        //cout<<sumtemp<<endl;
        //cout<<sumtemp<<endl;
        //cout<<"i--"<<i<<endl;
        if(sumtemp>p){
            ll xc=0;
            //ll xcount
            while(sumtemp>p){
                xc++;
                sumtemp-=(i+1);
               // xc++;
            }

            //cout<<"xc--"<<xc<<endl;
            if(xc!=count[i]){
                if(sumtemp<=p){
                counttemp[i]=count[i]-xc;
                }
                
            }
            else{
                sumtemp=temp;
            }
            //cout<<counttemp[2]<<endl;
    break;
        }
        else{
            counttemp[i]=count[i];
           
        }
        
//cout<<counttemp[2]<<endl;
        

    }
    string anss="";
   // cout<<sumtemp<<endl;
    for(ll i=0;i<s.length();i++){
        if(counttemp[s[i]-'a']>0){
            anss+=s[i];
            counttemp[s[i]-'a']--;

        }
    }
    cout<<anss<<endl;

}
return 0;
}