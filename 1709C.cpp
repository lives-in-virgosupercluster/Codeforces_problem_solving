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
    ll suma=0;
    ll q=0;
    
  for(ll i=0;i<s.length();i++){
    if(s[i]=='('){
        suma++;
    }
    else if(s[i]==')'){
        suma--;
    }
    else{
        q++;
    }
  }
  suma=-suma;
  ll op=(q+suma)/2;
  ll cl=q-op;
  int flag=0;
  //cout<<op<<endl;
  if(op==0 || cl==0){
    cout<<"yes"<<endl;
  }
  else{
  for(ll i=0;i<s.length();i++){
if(s[i]=='?' && op>1){
    op--;
    s[i]='(';
    
}
else if(s[i]=='?' && cl>0){
    s[i]=')';
    if(op==1){
        while(s[i]!='?' && i<s.length()){
            i++;
        }
        s[i]='(';
        op--;
    }
    cl--;
}
  }
  ll sum=0;
  int check=0;
  for(ll i=0;i<s.length();i++){
    if(s[i]=='('){
sum++;
    }
    else if(s[i]==')'){
        sum--;
    }
    if(sum<0){
        cout<<"yes"<<endl;
        check=1;
       // cout<<"yaha pe hai"<<endl;
        break;
    }
  }

//cout<<s<<endl;
//cout<<sum<<endl;
  if(sum!=0 && check!=1){
    cout<<"yes"<<endl;
    check=1;

  }
  if(!check){
    cout<<"no"<<endl;
  }
  }

  
}
return 0;
}