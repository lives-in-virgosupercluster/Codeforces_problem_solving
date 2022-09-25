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
ll a,s;
cin>>a>>s;
vector<int>b;
b.clear();
int flag=0;
//cout<<s<<endl;
while(s){
    int x=a%10;
    int y=s%10;
    if(x<=y){
        b.push_back(y-x);
        //cout<<y<<endl;
    }
    else{
        s/=10;
        y+=10*(s%10);
        //cout<<y<<endl;
        //s/=10;
        if(y<10 || y>18){
            flag=1;
            break;
        }
        else{
            b.push_back(y-x);
        }
    }
    a/=10;
    s/=10;
    
}
if(flag==0 && a==0){
    while(b.back()==0)
    b.pop_back();
    for(int i=b.size()-1;i>=0;i--){
        
        cout<<b[i];
    }
    
}
else{
    cout<<-1;
}
cout<<endl;


}
return 0;
}