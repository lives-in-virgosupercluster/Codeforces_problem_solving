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
    cin>>n;
    ll count=0;
    string s;
    cin>>s;
    for(int i=1;i<n;i++){
        if(s[i]=='1'){
            if(s[i-1]=='0'){
                count+=i+1;
            }
            else{
                count+=1;
            }
        }
        else if(s[i]=='0'){
            if(s[i-1]=='1'){
                count+=i+1;
            }
            else{
                count+=1;
            }
        }
    }
    count+=1;
    cout<<count<<endl;
}
return 0;
}