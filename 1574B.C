#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;
ll max(ll a,ll b,ll c){
    if(a>=b && a>=c){
        return 0;
    }
    else if( b>=a && b>=c)
    return 1;
    else
    return 2;
}

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll a,b,c,m;
    cin>>a>>b>>c>>m;
    ll max1=max(a,b,c);
    if(a-1 +b-1 +c-1>=m){
    if(max1==0){
       if(a-1<b+c){
           cout<<"YES"<<endl;
       }
       else{
           if(a-1-(b+c)>m){
               cout<<"NO"<<endl;
           }
           else{
               cout<<"YES"<<endl;
           }
       }
      
    }
    else if(max1==1){
         if(b-1<a+c){
           cout<<"YES"<<endl;
       }
       else{
           if(b-1-(a+c)>m){
               cout<<"NO"<<endl;
           }
           else{
               cout<<"YES"<<endl;
           }
       }
        
    }
    else{
          if(c-1<a+b){
           cout<<"YES"<<endl;
       }
       else{
           if(c-1-(a+b)>m){
               cout<<"NO"<<endl;
           }
           else{
               cout<<"YES"<<endl;
           }
       }

    }
    }
    else{
        cout<<"NO"<<endl;
    }
    

}
return 0;
}