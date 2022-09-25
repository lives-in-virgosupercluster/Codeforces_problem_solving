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
    int n,k;
    //cin>>s;
    cin>>n>>k;
    cin>>s;
    if(s[s.length()-1]!='1'){
        for(int i=n-2;i>=0;i--){
            if(s[i]=='1'){
                if(n-1-i<=k){
                    k-=n-1-i;
                    s[i]='0';
                    s[n-1]='1';
                    break;
                }
            }
        }
        }
        
    if(s[0]=='0'){
    for(int i=1;i<n;i++){
        if(s[i]=='1' && i!=n-1){
            if(i-0<=k){
                k-=i;
                s[i]='0';
                s[0]='1';
                break;
            }
        }
    }
    }

    int x=s[0]-'0';
    int sum=0;
    for(int i=1;i<n;i++){
        if(x==1 && (s[i]-'0')==1){
            sum+=11;
            x=1;

        }
        else if(x==1 && (s[i]-'0')==0){
            sum+=10;
            x=0;
        }
        else if(x==0 && (s[i]-'0')==1){
            sum+=1;
            x=1;
        }
        else if(x==0 &&(s[i]-'0')==0){
            sum+=0;
            x=0;
        }
    }
    cout<<sum<<endl;
    
}
return 0;
}