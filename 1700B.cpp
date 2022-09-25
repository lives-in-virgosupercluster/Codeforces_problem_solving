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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll mx=0;
    ll pos=0;
    for(ll i=s.length()-1;i>=0;i--){
        ll x=s[i]-'0';
        if(x>=mx){
            mx=x;
            pos=i;
        }
    }
    if(pos==0){
        if(mx!=9){
            ll target=mx+1;
            string ans="";
            string temp="";
            for(ll i=s.length()-1;i>=0;i--){
                ll c=(target)-(s[i]-'0');
                temp="";
                temp+=to_string(c);
               // cout<<temp<<endl;
                ans=temp+ans;

            }
            cout<<ans<<endl;
        }
        else{
            ll target=11;
            ll carry=0;
            ll c;
            string ans="";
            string temp="";
                        for(ll i=s.length()-1;i>=0;i--){
                if(carry==1){
                 c=((target-1)-(s[i]-'0'))%10;
                 //carry=0;
                }
                else{
                      c=((target)-(s[i]-'0'))%10;
                }
               
                if(c+(s[i]-'0')+carry>=10){
                    carry=1;
                }
                else{
                    carry=0;
                }
                temp="";
                temp+=to_string(c);
                ans=temp+ans;

            }
            cout<<ans<<endl;
        }
    }
    else{
        if(mx!=9){
            ll target=mx;
            string ans="";
            string temp="";
            for(ll i=s.length()-1;i>=0;i--){
                int c=(target)-(s[i]-'0');
                temp="";
                temp+=to_string(c);
                ans=temp+ans;

            }
            cout<<ans<<endl;
        }
        else{
            ll target=mx;
            ll carry=0;
            int num;
           // char c;
           string temp="";
            string ans="";
                        for(ll i=s.length()-1;i>=0;i--){
                if(carry==1){
                 num=((target-1)-(s[i]-'0'))%10;
                 //carry=0;
                }
                else{
                      num=((target)-(s[i]-'0'))%10;
                }
               
                if(num+(s[i]-'0')+carry>=10){
                    carry=1;
                }
                else{
                    carry=0;
                }
                temp="";
                 temp+=to_string(num);
                 ans=temp+ans;
                

            }
            cout<<ans<<endl;
        }

    }

}
return 0;
} 