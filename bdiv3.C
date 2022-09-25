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
ll a,b,c;
cin>>a>>b>>c;
if(2*b>(a+c)){
    if((2*b-c)%(a)==0){
        cout<<"yes"<<endl;
    }
    else if((2*b-a)%(c)==0)
    {
        cout<<"yes"<<endl;
    }
    else
    cout<<"no"<<endl;

}
else if(2*b<(a+c)){
    if((a+c)%(2*b)==0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
else{
    cout<<"yes"<<endl;
}
}
return 0;
}