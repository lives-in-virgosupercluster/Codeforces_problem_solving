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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int num=k;
    vector<int>ans(n,0);
    for(int i=0;i<s.length();i++){
        if(k%2==0){
            if(s[i]=='0'){
                if(num!=0){
                    ans[i]++;
                    num--;
                }


            }
        }
        else if(k%2!=0){
            if(s[i]=='1'){
                if(num!=0){
                    ans[i]++;
                    num--;
                }
            }
        }
        if(i==s.length()-1){
            ans[i]+=num;
        }


    }
    string anss ="";
    for(int i=0;i<n;i++){
        if((k-ans[i])%2==0){
            anss+=s[i];
        }
        else{
            if(s[i]=='1'){
                anss+='0';
            }
            else
            anss+='1';
        }
        
    }
    cout<<anss<<endl;
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}
return 0;
}