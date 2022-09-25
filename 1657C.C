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
    string s;
    cin>>s;
    //cout<<s<<endl;
    int right=0;
    int left=0;
    int prefix=0;
    int count=0;
    int rem=0;
    int wrong=0;
    int countnum=0;
    //for(int i=0;i<s.length();i++)
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' && wrong!=1 ){
            if(i+1!=s.length()){
            count++;
            i++;
            countnum+=2;
            }
        }
        
        else if(s[i]==')'){
            if(wrong==1){
                count++;
                wrong=0;
                countnum=i+1;
            }
            else{
                wrong=1;
            }

        }
        
    }
    
    cout<<count<<" "<<s.length()-countnum<<endl;
}
return 0;
}