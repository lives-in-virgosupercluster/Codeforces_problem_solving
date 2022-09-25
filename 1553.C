#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
int min1( int a,int b){
    if(b<a)
    return b;
    return a;
}
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
ll coun1=0;
ll couny=0;
ll coun2=0;
ll couny2=0;
int tot1=0;
int tot2=0;
ll min=99999;
for(int i=0;i<s.length();i++){
    if(i%2==0){
        if(s[i]!='0'){
            coun1++;
        }
        tot1++;
    }
    else{
        if(s[i]=='1'){
            coun2++;
        }
        tot2++;
    }
    if(coun1>coun2){
        if(coun1-coun2>5-tot2){
            min=i+1;
            break;
        }
    }
    else if(coun2>coun1){
        if(coun2-coun1>5-tot1){
            // cout<<tot1<<endl;
            // cout<<i+1<<endl;
            min=i+1;
            break;
        }
    }

}
tot1=0;
tot2=0;
coun1=0;
coun2=0;
for(int i=0;i<s.length();i++){
    if(i%2==0){
        if(s[i]=='1'){
            coun1++;
        }
        tot1++;
    }
    else {
        if(s[i]!='0'){
            coun2++;
        }
        tot2++;
    }
     if(coun1>coun2){
        if(coun1-coun2>5-tot2){
            min=min1(min,i+1);
            break;
        }
    }
    else if(coun2>coun1){
        if(coun2-coun1>5-tot1){
            min=min1(min,i+1);
            break;
        }
    }
}
if(min==99999){
    //cout<<10<<endl;
    min=10;
}
cout<<min<<endl;
}
}