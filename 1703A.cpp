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
    string temp="";
    for(ll i=0;i<3;i++){
        temp+=toupper(s[i]);

    }
    string real="YES";
    int flag=0;
    for(ll i=0;i<3;i++){
        if(temp[i]!=real[i]){
            flag=1;
            break;

        }

    }
    if(flag){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }
}
return 0;
}